#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int x = n;
    for (int i = 1; i < x; i++) {
        if (n / i == i) {
            cout << i << " ";
            x = n / i;
        } else if (n % i == 0) {
            cout << i << " " << n / i << " ";
            x = n / i;
        }
    }

    return 0;
}