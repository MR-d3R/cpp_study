#include <iostream>
#include <string>
#include <vector>

#define ll long long

using namespace std;

void in(vector<int> &a, int n, int m) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void out(vector<int> &a, int n, int m) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

int main() {
    int n, sum = 0;
    cin >> n;
    vector<int> a(n);
    in(a, n, n);
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
    out(a, n, n);

    return 0;
}


//4 4
//1 2 3 4
//5 6 7 8
//9 10 11 12
//13 14 15 16











//    Square square{10, 10};
//    square.print();
//    square.print_area();
//
//    Triangle triangle{10, 5, 3};
//    triangle.print();
//    triangle.print_perimeter();
//     will cause compile time error
//    return 0;
//    while (t--) {
//        ll n, cou = 1, sum = 0;
//        cin >> n;
//        if (n == 1) {
//            cout << 1 << endl;
//            continue;
//        } else {
//            string s = to_string(n);
//            ll count = 1, c = s[0] - '0';
//            while (count != c || cou != s.size()) {
//                while (cou < 5) {
//                    sum += cou;
//                    if (count == c && cou == s.size()) break;
//                    cou++;
//                }
//                if (count == c && cou == s.size()) break;
//                cou = 1;
//                count++;
//            }
//            if (s.size() == 1)
//                cout << sum + 1 << endl;
//            else
//                cout << sum << endl;
//        }
//    }