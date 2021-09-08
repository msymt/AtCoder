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

ll p;
int main() {
    cin.tie(0);ios_base::sync_with_stdio(0);
    cin >> p;
    ll ans = 0LL;
    
    // 貪欲法
    for(int i = 10; i > 0; i--) {
        ll total = 1LL;
        // N!
        rep(j, i) total *= (j + 1);
        while(total <= p) {
            p -= total;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
