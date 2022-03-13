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

bool isSquare(ll n) {
    ll d = (ll)sqrt(n) - 1;  // 1小さい値から
    while (d * d < n) d++;
    return d * d == n;
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n, d;
    cin >> n >> d;
    int x[n + 1][d + 1];
    rep(i, n) rep(j, d) {
        cin >> x[i][j];
    }
    int ans = 0;
    rep(i, n) for (int j = i + 1; j < n; j++) {
        ll dd = 0;
        for (int k = 0; k < d; k++) {
            dd += pow((x[i][k] - x[j][k]), 2);
        }
        if (isSquare(dd)) ans++;
    }
    cout << ans << endl;

    return 0;
}
