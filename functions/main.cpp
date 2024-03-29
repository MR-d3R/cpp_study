#include <iostream>
#include <string>
#include <vector>

#define ll long long

using namespace std;

// void-функция ничего не возвращает, но может изменить значения переменных, которые ей передали
void in(vector<int> &a, int n) {        // &a - указатель на массив, существующий в main(). Если не указывать,
    for (int i = 0; i < n; i++) {       // то будет создан новый массив, а существующий в main() НЕ будет изменён
        cin >> a[i];
    }
}

void out(vector<int> &a, int n) { // Простой вывод массива через пробелы
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}


// bool-функция возвращает true либо false
bool even(int n) {
    // Вариант записи 1
//    if (n % 2 == 0) {
//        return true;
//    }
//    return false;

    // Вариант записи 2
    return n % 2 == 0;  // проверка числа на четность
}

bool positive(int n) {
    return n > 0;  // проверка числа то, положительное ли оно
}

int sum_pos(vector<int> &a) {
    int sum = 0;
    for (int i = 0; i < a.size(); ++i) {
        if (positive(a[i])) {    // проерка числа с помощью функции
            sum += a[i];
        }
    }
    return sum;
}

int sum_neg(vector<int> &a) {
    int sum = 0;
    for (int i = 0; i < a.size(); ++i) {
        if (!positive(a[i])) {   // проерка числа с помощью функции, только обратная (если фкц возвращает false)
            sum += a[i];
        }
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    in(a, n);
    int sumPos = sum_pos(a), sumNeg = sum_neg(a);
    cout << sumPos << "-(" << sumNeg << ") = " << sumPos - sumNeg<<endl;
    out(a, n);
}