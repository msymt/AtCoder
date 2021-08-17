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
ll n;
ll a[100100];
ll b[100100];
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    cin >> n;
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];
    ll ans = 0LL;
    rep(i, n) {
        ans += a[i] * b[i];
    }
    if(ans == 0) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
