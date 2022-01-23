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

ll func(ll a, ll b) {
    return (a + b) * (b - a + 1) / 2;
}


int main() {
    ll t; cin >> t;
    vector<ll> a(t), b(t);
    rep(i, t) cin >> a[i] >> b[i];
    rep(i, t) {
        ll min_c = a[i];
        ll max_c = b[i] - a[i];
        if(min_c > max_c) cout << 0 << endl;
        else {
            // C=L,L+1,…,R 
            cout << func(b[i] - max_c - a[i] + 1, b[i] - min_c - a[i] + 1) << endl;
        }
    }
    return 0;
}
