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
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    ll a[201] = {0};
    ll ans = 0;
    
    rep(i, n) {
        ll ai;
        cin >> ai;
        a[ai % 200]++;
    }
    rep(i, 200) {
        ans += (a[i] * (a[i] - 1)) / 2;
    }
    cout << ans << endl;
    return 0;
}