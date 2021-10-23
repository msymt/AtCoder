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
// ←↓→↑
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

const ll mod = 998244353;

ll comb(ll n, ll r) {
    ll top=1, bottom=1;
    for (int i=1; i<n+1; i++) top *= i;
    for (int i=1; i<r+1; i++) bottom *= i;
    for (int i=1; i<n-r+1; i++) bottom *= i;
    ll ans = (top % mod) / (bottom % mod);
    return ans;
}


ll combination(ll n, ll r, ll m, ll s, ll o, ll t) {
    ll top=1, bottom=1;
    ll top2=1, bottom2=1;
    ll top3=1, bottom3=1;

    for (ll i=1; i<n+1; i++) top *= i%mod;
    for (ll i=1; i<r+1; i++) bottom *= i%mod;
    for (ll i=1; i<n-r+1; i++) bottom *= i%mod;
    
    for (ll i=1; i<m+1; i++) top2 *= i;
    for (ll i=1; i<s+1; i++) bottom2 *= i;
    for (ll i=1; i<m-s+1; i++) bottom2 *= i;

    for (ll i=1; i<o+1; i++) top3 *= i;
    for (ll i=1; i<t+1; i++) bottom3 *= i;
    for (ll i=1; i<o-t+1; i++) bottom3 *= i;
    ll ans1 = (top / bottom) %mod;
    ll ans2 = top2 / bottom2;
    ll ans3 = top3 / bottom3;
    ll ans = ans1 - ans2*ans3;
    return ans;
}

int main() {
    cin.tie(0);ios_base::sync_with_stdio(0);
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    if(a - n > 0 || b - m > 0) {
        cout << comb(n+m, n) << endl;
    } else {
        cout << combination(n+m, n, a+b, b, (n-a + m-b), m-b) << endl;
    }
    return 0;
}
