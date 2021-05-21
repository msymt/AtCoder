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
    int a,b;
    cin >> a >> b;
    int ans = 0;
    rep(i, 2) {
        if(a > b) {
            ans += a;
            a--;
        } else {
            ans += b;
            b--;
        }
    }
    cout << ans << endl;
    return 0;
}