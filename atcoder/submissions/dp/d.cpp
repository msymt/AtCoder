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
    int n, w;
    cin >> n >> w;

    ll val[110];
    ll wei[110];
    ll dp[110][1000100] = {0};

    rep(i, n) {
        cin >> wei[i] >> val[i];
    }

    for (int i = 0; i < n; i++) {
        for (int sum_w = 0; sum_w <= w; sum_w++) {
            if (sum_w - wei[i] >= 0) {
                chmax(dp[i + 1][sum_w], dp[i][sum_w - wei[i]] + val[i]);
            }
            chmax(dp[i + 1][sum_w], dp[i][sum_w]);
        }
    }

    cout << dp[n][w] << endl;
    return 0;
}
