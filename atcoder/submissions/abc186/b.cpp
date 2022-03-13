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
int h, w;
int a[200][200];
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    cin >> h >> w;
    int ans = 0;
    int mint = 10000;
    rep(i, h) rep(j, w) {
        cin >> a[i][j];
        mint = min(mint, a[i][j]);
    }
    rep(i, h) rep(j, w) {
        ans += a[i][j] - mint;
    }
    cout << ans << endl;
    return 0;
}
