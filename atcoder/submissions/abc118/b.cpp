#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <string>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int> > table(100, vector<int>(100, 0));
    vector<int> fab(10000, 0);
    rep(i, n) {
        int k;
        cin >> k;
        table[i][0] = k;
        for (int j = 1; j < k + 1; j++) {
            int a;
            cin >> a;
            table[i][j] = a;
        }
    }
    rep(i, n) {
        for (int j = 1; j < table[i][0] + 1; j++) {
            int a = table[i][j];
            fab[a]++;
        }
    }
    int cnt = 0;
    rep(i, 10000) {
        if (fab[i] == n) cnt++;
    }

    cout << cnt << endl;

    return 0;
}
