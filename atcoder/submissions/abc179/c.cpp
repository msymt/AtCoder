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
    ll n;
    cin >> n;
    int cnt = 0;
    // A * B < N を満たす数を数える．CはNになるように選ぶだけで良いため数えなくて良い．
    // Aを固定した時, Bとして考えられる値は, B = (N-1) / A
    // Aを1からN-1まで全探索
    for (ll a = 1; a < n; a++) {
        ll x = (n - 1) / a;
        cnt += x;
    }
    cout << cnt << endl;
    return 0;
}
