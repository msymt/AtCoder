// g++ -std=c++14 -o c c.cpp

#include <atcoder/modint>
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
#define mod 998244353
using namespace std;
using namespace atcoder;
using ll = long long;
using mint = modint;


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
// ←↓→↑
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

modint nCr(int n, int r) {
    if(n < r) return 0;
    mint res = 1;
    for(int i = 0; i < r; i++) {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

int main() {
    cin.tie(0);ios_base::sync_with_stdio(0);
    int n, m, a, b, ans;
    cin >> n >> m >> a >> b;
    // vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
    // dp[0][0] = 1;
    // for(int i = 0; i <= n; i++) {
    //     for(int j = 0; j <=m; j++) {
    //         // 侵入禁止 = 歩数0と扱う
    //         if(i == a && j == b) dp[i][j] = 0;continue;
    //         // x軸を足す
    //         if(i != 0) dp[i][j] += dp[i - 1][j];
    //         // y軸を足す
    //         if(j != 0) dp[i][j] += dp[i][j - 1];
    //         dp[i][j] %= mod;
    //     }
    // }
    // // (N, M)
    // ans = dp[n][m];

    if(a <= n && b <= m) {
        mint res = nCr(n + m, n);
        mint sub = nCr(a + b, a);
        sub *= nCr(((n+m) - (a+b)), (n-a));
        res -= sub;
        ans = res.val();
    } else {
        ans = nCr(n + m, n).val();
    }
    cout << ans << endl;
    return 0;
}
