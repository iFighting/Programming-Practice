#include <iostream>

using namespace std;

int matrix[105][105];

int abs(int x, int y) {
    if (x - y < 0) return y - x;
    else return x - y;
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i ++) {
        for (int j = 1; j <= n; j ++) {
            cin >> matrix[i][j];
        }
    }
    int sum1 = 0, sum2 = 0;
    for (int i = 1; i <= n; i ++) {
        sum1 += matrix[i][i];
        sum2 += matrix[i][n - i + 1];
    }
    cout << abs(sum1, sum2) << endl;
    return 0;
}