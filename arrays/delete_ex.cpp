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
    int n, pos;
    cin >> n;
    vector<int> a(n);
    in(a, n);
    cin>>pos;
    sort(a.begin(), a.end());

    a.erase(a.begin(), a.begin() + pos);
    n-=pos;

    out(a, n);
    return 0;
}
