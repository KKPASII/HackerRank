#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, q, k, i, j, tmp;
    cin >> n >> q;
    vector<vector<int>> arr(n);
    for (int line = 0; line < n; line++) {
        cin >> k;
        arr[line].resize(k);
        for (int idx = 0; idx < k; idx++) {
            cin >> arr[line][idx];
        }
    }

    for (int query = 0; query < q; query++) {
        cin >> i >> j;
        cout << arr[i][j] << '\n';
    }

    return 0;
}