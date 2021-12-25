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

// 貪欲法で解けるんだ. DPだと思ってた
int main() {
    cin.tie(0);ios_base::sync_with_stdio(0);
    ll n, w; cin >> n >> w;
    vector<pair<ll, ll>> a(n);
    for(auto &nx : a) {
        cin >> nx.first >> nx.second;
    }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    ll res = 0;
    for(auto &nx: a) {
        res += nx.first * min(w, nx.second);
        w -= min(w, nx.second);
    }
    cout << res << endl;
    return 0;
}
