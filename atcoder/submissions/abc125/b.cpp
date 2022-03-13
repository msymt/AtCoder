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
    int n;
    cin >> n;
    vector<int> v(n), c(n);
    rep(i, n) {
        cin >> v[i];
    }
    rep(i, n) {
        cin >> c[i];
    }
    int ans = 0;
    rep(i, n) {
        if (v[i] - c[i] > 0) {
            ans += v[i] - c[i];
        }
    }
    cout << ans << endl;
    return 0;
}
