#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <string>
#include <vector>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for(int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;

template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template<class T> inline bool chmax(T& a, T b) {
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
    int n, k;
    cin >> n >> k;
    ll h[100010];
    rep(i, n) cin >> h[i];

    ll dp[100010];
    rep(i, 100010) dp[i] = INF;
    // 初期条件
    dp[0] = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 1; j <= k; j++) {
            chmin(dp[i + j], dp[i] + abs(h[i + j] - h[i]));
        }
    }
    cout << dp[n - 1] << endl;
    return 0;
}
