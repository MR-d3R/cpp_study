#include <iostream>
#include <string>

using namespace std;

int main() {
    int count = 0;
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++) {  // s.size() - длина строки
        if (s[i] == 'A') {                // если символ 'A' встречается в строке
            count++;
        }
    }
    cout << count << endl;

    return 0;
}