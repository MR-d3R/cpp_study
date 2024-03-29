#include <iostream> // Стандартная библиотека C++ для ввода-вывода данных

using namespace std; // Объявляем стандартную библиотеку C++

int main() { // Главная функция программы
    int a;           // integer - целое число
    long b;          // long - целое число, но больше
    long long c;     // long long - целое число, но ещё больше
    float d;         // float - дробное число
    double e;        // double - дробное число
    cin >> a >> b >> c >> d >> e; // Ввод данных, для числовых значений нет разницы - везде cin
    char f;          // char - символ
    cin >> f;        // Ввод символа (если ввести hello, то f будет равно 'h', остальные буквы пропадут в никуда)
    string g;        // string - строка
    cin >> g;        // Ввод строки до пробела (если ввести hello world, то g будет равно "hello")
    getline(cin, g); // Ввод строки полностью (если ввести hello world, то g будет равно "hello world")

    return 0;
}