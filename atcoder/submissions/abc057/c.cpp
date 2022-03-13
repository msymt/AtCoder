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

ll cnt_digits(ll n) {
    ll cnt = 0;
    while (n > 0) {
        n /= 10;
        cnt++;
    }
    return cnt;
}

int main() {
    ll n;
    cin >> n;
    ll ans = cnt_digits(n);

    for (ll a = 1; a * a <= n; a++) {
        if (n % a != 0) continue;
        ll b = n / a;
        ll cur_cnt = max(cnt_digits(a), cnt_digits(b));
        chmin(ans, cur_cnt);
    }
    cout << ans << endl;
    return 0;
}
