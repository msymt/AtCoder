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
    int n; cin >> n;
    vector<int> x(n); 
    int sum = 0;
    rep(i, n) {
        cin >> x[i];
        sum += x[i];
    }
    int ans = 1e6;
    for(int p = 1; p < 101; p++) {
        int res = 0;
        rep(i, n) {
            res += (x[i] - p) * (x[i] - p);
        }
        chmin(ans, res);
    }
    cout << ans << endl;
    return 0;
}
