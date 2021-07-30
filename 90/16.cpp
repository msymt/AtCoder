#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <vector>
#include <numeric>
#include <map>
#include <queue>
#include <cmath>
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
    ll N,A,B,C;
    ll maxt = 9999;
    cin >> N >> A >> B >> C;
    // N = A*i + B*j + C*z
    // z = (N - A*i - B*j) / C
    ll mint = INF;
    for(ll i = 0;i <= maxt; i++){
      for(ll j = 0; i+j <= maxt; j++) {
        double tmp = (double)(N - A*i - B*j) / C;
        if (tmp >= 0.0 && ceil(tmp) == floor(tmp)) { // 切り捨て == 切り上げ
          ll k = (N - A*i - B*j) / C;
          // cout << tmp << ", " << k << endl;
          if (i+j+k >= 1LL) {
            mint = min(i+j+k, mint);
          }
        }
      }
    }
    cout << mint << endl;
    return 0;
}
