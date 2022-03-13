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

int main() {
    ll n;
    cin >> n;
    ll a[n], b[n], c[n];
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];
    ll max_t = a[0];
    c[0] = a[0] * b[0];
    for (int i = 1; i < n; i++) {
        max_t = max(max_t, a[i]);  // max ai
        c[i] = max(c[i - 1], max_t * b[i]);
    }
    rep(i, n) cout << c[i] << endl;
    return 0;
}
