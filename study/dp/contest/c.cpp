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

    ll a[100010][3];
    ll dp[100010][3];

    rep(i, n) rep(j, 3){
      cin >> a[i][j];
    }

    // 0 ~ n-1日
    for (int i = 0; i < n; i++) {
      // 3通り(実際は2通り)
      for (int j = 0; j < 3; j++) {
        for(int k = 0; k < 3; k++) {
          // 被ったとこ
          if(j == k) continue;
          chmax(dp[i + 1][k], dp[i][j] + a[i][k]);
        }
      }
    }

    ll res = 0LL;
    // 最終日
    for(int i = 0; i < 3; i++) {
      chmax(res, dp[n][i]);
    }
    cout << res << endl;
    return 0;
}
