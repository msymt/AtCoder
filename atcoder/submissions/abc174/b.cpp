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
ll n;
double d;
ll x[200100];
ll y[200100];

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    cin >> n >> d;
    rep(i, n) cin >> x[i] >> y[i];
    ll cnt = 0;
    rep(i, n) {
        double dist = pow(x[i], 2) + pow(y[i], 2);
        // less error
        if (dist <= d * d) cnt++;
    }
    cout << cnt << endl;
    return 0;
}
