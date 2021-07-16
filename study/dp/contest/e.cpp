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
const int MAX_N = 110;
const int MAX_V = 100100;
ll val[MAX_N];
ll wei[MAX_N];
ll dp[MAX_N][MAX_V];

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n;
    ll w;
    cin >> n >> w;

    rep(i, n) {
      cin >> wei[i] >> val[i];
    }
    for (int i = 0; i < MAX_N; ++i) {
      for (int j = 0; j < MAX_V; ++j) dp[i][j] = INF;
    }
    // init
    dp[0][0] = 0;

    // dp[i + 1][sum_w] := i番目までの品物から価値がsum_vとなるように選んだ時の，重さの総和の最小値
    // chmin(dp[i + 1][sum_v], dp[i][sum_v - val[i]] + wei[i]);
    // chmin(dp[i + 1][sum_v], dp[i][sum_v]);

    for (ll i = 0LL; i < n; i++) {
      for (ll sum_v = 0LL; sum_v < MAX_V; sum_v++) {
        if(sum_v - val[i] >= 0LL) {
          chmin(dp[i + 1][sum_v], dp[i][sum_v - val[i]] + wei[i]);
        }
        chmin(dp[i + 1][sum_v], dp[i][sum_v]);
      }
    }
    ll ans = 0LL;
    for (ll sum_v = 0LL; sum_v < MAX_V; sum_v++) {
      if(dp[n][sum_v] <= w) ans = sum_v;
    }
    cout << ans << endl;

    return 0;
}
