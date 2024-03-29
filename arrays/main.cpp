#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;                             // Размер массива
    vector<int> a(n);
    for (int i = 0; i < a.size(); i++) {  // a.size() - размер массива (если по каким-то причинам n изменяется в течении кода)
        cin >> a[i];                      // Ввод элементов массива
    }
    for (int i = 0; i < n; i++) {
        sum += a[i];                      // подсчёт суммы элементов массива
    }
    cout << "Array: \n";
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";              // Вывод элементов массива
    }
    cout << "\nSum: " << sum << endl;     // Вывод суммы элементов массива
}