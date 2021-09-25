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

int main() {
    cin.tie(0);ios_base::sync_with_stdio(0);
    ll x; cin >> x;
    ll ans = 0LL;
    while(1) {
        if(x / 500 >= 1) {
            ans += 1000;
            x -= 500;
        } else if(x / 5 >= 1) {
            ans += 5;
            x -= 5;
        } else {
            break;
        }
    }
    cout << ans << endl;

    return 0;
}
