#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <vector>
#include <numeric>
#include <map>
#include <queue>
#include <cmath>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for(int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
    ll n; cin >> n;
    ll ans = 1LL << 60;
    // 2^60 > 10^18
    for(ll b = 0; b <= 60; b++) {
        ll a = n / (1LL << b);
        ll c = n - a * (1LL << b);
        ans = min(ans, a + b + c);
    }
    cout << ans << endl;
    return 0;
}
