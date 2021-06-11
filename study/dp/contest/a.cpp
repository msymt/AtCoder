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
    int n;
    cin >> n;
    ll h[100010];
    rep(i, n) cin >> h[i];

    ll dp[100010];
    rep(i, 100010) dp[i] = INF;
    // 初期条件
    dp[0] = 0;
    for(int i = 1; i < n; i++) {
      // dp[i-1]：i-1までの最適な進み方をわかっている
      chmin(dp[i], dp[i - 1] + abs(h[i] - h[i - 1]));
      // 2個前に遡ることができるのは2以上
      if(i > 1) {
        // dp[i-2]：i-2までの最適な進み方をわかっている
        chmin(dp[i], dp[i - 2] + abs(h[i] - h[i - 2]));
      }
    }
    cout << dp[n - 1] << endl;
    return 0;
}
