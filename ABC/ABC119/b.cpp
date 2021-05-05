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
    double ans;
    rep(i, n) {
        double x;
        string u;
        cin >> x >> u;
        if(u == "BTC") {
            x = 380000.0 * x;
        }
        ans += x;
    }
    cout << ans << endl;
    return 0;
}