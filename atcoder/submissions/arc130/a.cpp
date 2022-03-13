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
    int n;
    cin >> n;
    char s[n];
    scanf("%s", s + 1);
    ll ans = 0, res = 0;
    for (int i = 1; i <= n + 1; i++) {
        if (s[i] == s[i - 1])
            res++;
        else {
            ans += res * (res - 1) / 2;
            res = 1;
        }
    }
    cout << ans << endl;
    return 0;
}
