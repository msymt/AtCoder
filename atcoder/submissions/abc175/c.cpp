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
// ←↓→↑
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

ll solve(ll x, ll k, ll d) {
    x = abs(x);
    // 地点 r に到達するまで
    ll q = x / d, r = x % d;
    if (q >= k) {
        return x - d * k;
    }
    // 残り回数
    ll rem = k - q;
    if (rem % 2 == 0)
        return r;
    else
        return d - r;
}

int main() {
    // start: x,
    // count: k
    // step: d,-d
    ll x, k, d;
    cin >> x >> k >> d;
    cout << solve(x, k, d) << endl;
    return 0;
}
