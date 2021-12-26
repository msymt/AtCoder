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

ll g1(ll x) {
    vector<ll> a;
    while(x > 0) {
        a.push_back(x % 10);
        x /= 10;
    }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    string res = "";
    for(int i = 0; i < a.size(); i++) {
        if(a[i] == 0 && i == 0) continue;
        res += to_string(a[i]);
    }
    return stoll(res);
}
ll g2(ll x) {
    vector<ll> a;
    while(x > 0) {
        a.push_back(x % 10);
        x /= 10;
    }
    sort(a.begin(), a.end());
    string res = "";
    for(int i = 0; i < a.size(); i++) {
        if(a[i] == 0 && i == 0) continue;
        res += to_string(a[i]);
    }
    return stoll(res);
}

int main() {
    cin.tie(0);ios_base::sync_with_stdio(0);
    ll n, k; cin >> n >> k;
    vector<ll> a(k + 1);
    a[0] = n;
    for(ll i = 1; i <= k; i++) {
        ll g1_x = g1(a[i - 1]);
        ll g2_x = g2(a[i - 1]);
        a[i] = g1_x - g2_x;
        if(a[i] == 0)  {
            cout << a[i] << endl;
            return 0;
        }
    }
    cout << a[k] << endl;
    return 0;
}
