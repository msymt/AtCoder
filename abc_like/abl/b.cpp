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
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    // [a,b], [c, d] AND -> max(a, c), min(b, d)
    ll l = max(a, c);
    ll r = min(b, d);
    if(l <= r) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
