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
    int n; cin >> n;
    int p[n+1], q[n+1];
    rep(i, n) cin >> p[i];
    rep(i, n) cin >> q[i];
    vector<int> v; // 大きさ 1, 2, ..., N の順列
    rep(i, n) v.push_back(i+1);
    int index = 0, a = -1, b = -1;
    do {
        bool ok = true;
        rep(i, n) if(v[i] != p[i]) ok = false;
        if(ok) a = index;

        ok = true;
        rep(i, n) if(v[i] != q[i]) ok = false;
        if(ok) b = index;
        
        index++;
    }while(next_permutation(v.begin(), v.end()));
    int ans = abs(a - b);
    cout << ans << endl;
    return 0;
}
