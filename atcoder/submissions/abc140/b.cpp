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
    int n;
    cin >> n;
    int ans = 0;
    int a[n], b[n], c[n];

    rep(i, n) {
        cin >> a[i];
        a[i]--;
    }
    rep(i, n) cin >> b[i];
    rep(i, n - 1) cin >> c[i];

    int pre = -100;
    rep(i, n) {
        ans += b[a[i]];
        if (i == 0)
            pre = a[i];
        else {
            if (pre + 1 == a[i]) ans += c[a[i] - 1];
            pre = a[i];
        }
    }
    cout << ans << endl;
    return 0;
}
