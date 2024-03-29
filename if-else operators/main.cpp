#include <iostream> // Стандартная библиотека C++ для ввода-вывода данных

using namespace std; // Объявляем стандартную библиотеку C++

int main() { // Главная функция программы
    int n, m;
    cin >> n >> m;

    if (n % 2 == 0) { // Проверяем, является ли n четным
        cout << "YES" << endl;
    } else { // В противном случае идём в else
        cout << "NO" << endl;
    }

    if (m > 0) {
        cout << "Positive" << endl;
    } else if (m < 0) {  // Конструкция else-if
        cout << "Negative" << endl;
    } else if (m == 0) {
        cout << "Zero" << endl;
    }

    if (n % 3 == 0 && m > 0) {  //           && оператор AND (И) - проверяет, выполняются ли оба условия
        cout << "Condition 1" << endl;
    } else if (n % 5 == 0 || m < 0) { //     || оператор OR (ИЛИ) - проверяет, выполняются ли какое-либо условие
        cout << "Condition 2" << endl;
    } else if (n % 2 == 0 && m > 0 || n % 10 == 0 && m == 0) {     // смешение операторов AND и OR
        cout << "Condition 3" << endl;
    } else {
        cout << "Condition 4" << endl;
    }

    return 0;
}