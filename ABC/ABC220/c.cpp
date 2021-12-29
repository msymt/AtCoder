#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <vector>
#include <numeric>
#include <map>
#include <queue>
#include <cmath>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for(int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;

template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

const ll INF = 1LL << 60;

// O(n)
int main() {
    cin.tie(0);ios_base::sync_with_stdio(0);
    int n; cin >> n;
    vector<ll> a(n); rep(i, n) cin >> a[i];
    ll x; cin >> x;
    ll sum = 0;
    rep(i, n) sum += a[i];
    // k = p * n + q
    ll p = x / sum; // A全体がいくつ必要か
    ll sum_b = p * sum; // Aの合計
    ll ans = p * n; // Aの合計がxになるように必要なAの数    
    // 不足分
    rep(i, n) {
        sum_b += a[i];
        ans++;
        if (sum_b >= x) {
            cout << ans << endl;
            return 0;
        }
    }
    return 0;
}
