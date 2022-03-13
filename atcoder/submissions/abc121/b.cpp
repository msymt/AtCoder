#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <string>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n, m, c;
    cin >> n >> m >> c;
    vector<vector<int> > a(1000, vector<int>(m));
    vector<int> b(201, 0);
    rep(i, m) cin >> b[i];

    rep(i, n) {
        rep(j, m) {
            cin >> a[i][j];
        }
    }
    int cnt = 0;
    rep(i, n) {
        ll tmp = 0;
        rep(j, m) {
            tmp += (ll)(a[i][j] * b[j]);
        }
        if (tmp + c > 0) cnt++;
    }
    cout << cnt << endl;
    return 0;
}
