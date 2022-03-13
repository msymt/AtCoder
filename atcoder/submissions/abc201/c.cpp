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
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    string S;
    cin >> S;
    int ans = 0;
    rep(i, 10000) {
        vector<bool> flag(10);
        int x = i;
        rep(j, 4) {
            flag[x % 10] = true;
            x /= 10;
        }
        bool flag2 = true;
        rep(j, 10) {
            if (S[j] == 'o' && !flag[j]) flag2 = false;
            if (S[j] == 'x' && flag[j]) flag2 = false;
        }
        ans += flag2;
    }
    cout << ans << endl;
    return 0;
}
