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
    int n, m;
    cin >> n >> m;
    vector<int> a(n + 10);
    vector<int> b(m + 10);
    vector<int> v(10000, 0);
    rep(i, n) cin >> a[i];
    rep(i, m) cin >> b[i];
    rep(i, n) v[a[i]]++;
    rep(i, m) v[b[i]]++;
    rep(i, 10000) {
        if (v[i] == 1) cout << i << " ";
    }
    cout << endl;
    return 0;
}
