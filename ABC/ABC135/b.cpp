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
int n;
int main() {
    cin.tie(0);ios_base::sync_with_stdio(0);
    cin >> n;
    int p[n]; rep(i, n) cin >> p[i];
    int q[n]; rep(i, n) q[i] = p[i];
    sort(p, p+n);
    int cnt = 0;
    rep(i, n) {
        if(p[i] != q[i]) cnt++;
    }
    if(cnt <= 2) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
