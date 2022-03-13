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

ll pow_ll(ll x, ll y) {
    if (y == 1)
        return x;
    else
        return x * x;
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    ll a, b, c;
    cin >> a >> b >> c;
    // c: 偶奇判定
    if (c % 2 == 0)
        c = 2;
    else
        c = 1;
    if (pow_ll(a, c) > pow_ll(b, c))
        cout << ">" << endl;
    else if (pow_ll(a, c) < pow_ll(b, c))
        cout << "<" << endl;
    else
        cout << "=" << endl;
    return 0;
}
