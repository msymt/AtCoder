#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <string>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;

template <class T>
inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template <class T>
inline bool chmax(T& a, T b) {
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
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int h, w, y, x;
    cin >> h >> w >> y >> x;
    x--;
    y--;
    string s[110];
    rep(i, h) cin >> s[i];
    int ans = 1;
    rep(i, 4) {
        int xi = x, yi = y;
        while (1) {
            xi += dx[i];
            yi += dy[i];

            // outside
            if (xi < 0 || w <= xi || yi < 0 || h <= yi) break;
            // stacked
            if (s[yi][xi] == '#') break;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
