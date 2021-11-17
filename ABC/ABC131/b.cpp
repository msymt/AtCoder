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
    cin.tie(0);ios_base::sync_with_stdio(0);
    int n,l; cin >> n >> l;
    int min_t = 10000;
    int min_t_idx = -1;
    for(int i = 1; i <= n; i++) {
        if(chmin(min_t, abs(l + i - 1))) min_t_idx = i;
    }
    int ans = 0;
    for(int i = 1; i <= n; i++) {
        if(i != min_t_idx) ans += l + i - 1;
    }
    cout << ans << endl;
    return 0;
}
