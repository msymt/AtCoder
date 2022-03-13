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

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    // b:0 ~ N-2
    vector<int> b(n);
    rep(i, n - 1) cin >> b[i];
    int ans = b[0];
    // a[0] : b[0], a[n-1] : b[n-2]
    // a[i] = min(b[i],b[i-1]) : a[1] ~ a[n-2]まで
    for (int i = 1; i < n - 1; i++) {
        ans += min(b[i], b[i - 1]);
    }
    ans += b[n - 2];
    cout << ans << endl;
    return 0;
}
