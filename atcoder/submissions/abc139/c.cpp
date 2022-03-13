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

template <class T>
inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template <class T>
inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

const ll INF = 1LL << 60;
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    ll h[n];
    rep(i, n) cin >> h[i];
    vector<bool> checked(n, false);
    int ans = 0;
    rep(i, n) {
        if (!checked[i]) {
            checked[i] = true;
            for (int j = i + 1; j < n; j++) {
                // 大きくなるまで数え上げる
                if (h[j - 1] < h[j]) break;
                checked[j] = true;
                // 更新
                chmax(ans, j - i);
            }
        }
    }
    cout << ans << endl;
    return 0;
}
