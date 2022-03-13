#include <algorithm>
#include <cmath>
#include <iostream>
#include <numeric>
#include <set>
#include <string>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;
const int MOD = 1000000007;

int main() {
    int N, M;
    ll ans = 0;
    cin >> N >> M;
    vector<bool> issafe;       // issafe[v] := v is broken or not
    vector<int> dp(N + 1, 0);  // DP table

    issafe.assign(N + 1, true);
    rep(i, M) {
        int a;
        cin >> a;
        issafe[a] = false;  // a step is broken
    }

    // initial
    dp[0] = 1;
    if (issafe[1]) dp[1] = 1;

    // loop
    for (int n = 2; n <= N; n++) {
        if (issafe[n - 1]) dp[n] += dp[n - 1];
        if (issafe[n - 2]) dp[n] += dp[n - 2];
        dp[n] %= MOD;
    }

    cout << dp[N] << endl;
    return 0;
}
