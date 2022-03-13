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

int n;
ll k;
int a[200010];
int c[200010];
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    cin >> n >> k;
    rep(i, n) cin >> a[i];
    vector<int> b;
    rep(i, n) b.push_back(i);  // 国民の添字

    ll base_value = k / n;
    int mod = k % n;
    sort(b.begin(), b.end(), [&](int i, int j) { return a[i] < a[j]; });  // 国民番号で昇順ソート
    rep(i, mod) c[b[i]]++;

    rep(i, n) {
        ll ans = base_value + c[i];
        printf("%lld\n", ans);
    }
    return 0;
}
