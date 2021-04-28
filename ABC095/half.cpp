#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <vector>
#include <numeric>
#include <map>
#include <cmath>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for(int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main(){
    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;
    int aAndB = c * 2;
    int up = 100001;
    int ans = INT_MAX;
    rep(i, up) {
        int mint = i * aAndB + max(0, x - i) * a + max(0, y - i) * b;
        ans = min(mint, ans);
    }

    cout << ans << endl;
    return 0;
}