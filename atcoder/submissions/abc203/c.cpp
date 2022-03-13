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

int main(void) {
    int n;
    ll k, x, y;
    vector<pair<ll, ll> > a;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        a.push_back({x, y});
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        if (a[i].first > k) break;
        k += a[i].second;
    }
    cout << k << endl;
    return 0;
}
