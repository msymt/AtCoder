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

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    ll n;cin>>n;
    vector<ll> a;
    vector<ll> b;
    rep(i, n) {
        ll ai;cin>>ai;
        a.push_back(ai);
        b.push_back(ai);
    }
    sort(a.begin(), a.end());
    ll score = a[n - 2];
    rep(i, n) {
        if(score == b[i]) {
            cout << i + 1 << endl;
            return 0;
        }
    }
    return 0;
}
