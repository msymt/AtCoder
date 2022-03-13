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
int n, x, ans = 0;
int a[1000];
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    cin >> n >> x;
    rep(i, n) {
        cin >> a[i];
        if ((i + 1) % 2 == 0) a[i]--;
    }
    rep(i, n) ans += a[i];
    if (ans <= x)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
