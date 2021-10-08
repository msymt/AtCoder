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
    int n; cin >> n;
    int d[n]; rep(i, n) cin >> d[i];
    int ans = 0;
    rep(i, n)  {
        for(int j = i + 1; j < n; j++) {
            if(i != j) {
                ans += d[i] * d[j]; 
            }
        }
    }
    cout << ans << endl;
    return 0;
}
