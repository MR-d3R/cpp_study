#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    while (s.size() < 26) {
        s.push_back('_');   // добавить в конец строки
    }
    cout << s << endl;
    return 0;
}