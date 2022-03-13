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
    ll h, w;
    cin >> h >> w;
    ll a[h][w], b[w][h];
    for (ll i = 0; i < h; i++) {
        for (ll j = 0; j < w; j++) {
            cin >> a[i][j];
        }
    }
    for (ll j = 0; j < w; j++) {
        for (ll i = 0; i < h; i++) {
            b[j][i] = a[i][j];
        }
    }
    for (ll j = 0; j < w; j++) {
        for (ll i = 0; i < h; i++) {
            cout << b[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}
