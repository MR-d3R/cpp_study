#include <iostream>
#include <string>
#include <vector>

#define ll long long

using namespace std;

void in(vector<vector<int>> &a, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }
}

void out(vector<vector<int>> &a, int n, int m) {
    cout << "\nMatrix: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n, m, sum = 0;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m, 0)); // инициализируем матрицу NxM
    in(a, n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; ++j) {
            sum += a[i][j];
        }
    }
    cout << sum << endl;
    return 0;
}