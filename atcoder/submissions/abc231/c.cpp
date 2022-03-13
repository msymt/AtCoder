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
    int n, q;
    cin >> n >> q;
    vector<int> a(n), x(q), cnt(q, 0);
    rep(i, n) cin >> a[i];
    rep(i, q) cin >> x[i];
    sort(a.begin(), a.end());
    // 2部探索
    for (int i = 0; i < q; i++) {
        int ok = n, ng = -1;
        while (ok - ng > 1) {
            // 中間
            int mid = (ok + ng) / 2;
            // 中間の値がx[i]以上の場合
            if (a[mid] >= x[i])
                ok = mid;
            else
                ng = mid;
        }
        cout << n - ok << endl;
    }
    return 0;
}
