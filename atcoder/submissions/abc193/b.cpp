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
ll n, ans = INF;
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    cin >> n;
    for (ll i = 0LL; i < n; i++) {
        ll a, p, x;
        cin >> a >> p >> x;
        if (a < x) ans = min(ans, p);
    }
    if (ans == INF) ans = -1;
    cout << ans << endl;
    return 0;
}
