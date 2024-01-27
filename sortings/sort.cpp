#include <iostream>
#include <string>
#include <vector>

#define ll long long

using namespace std;

void in(vector<int> &a, int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void out(vector<int> &a, int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    in(a, n);
    sort(a.begin(), a.end());
    out(a, n);

    return 0;
}