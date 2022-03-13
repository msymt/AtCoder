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
    string a, b, c;
    cin >> a >> b >> c;
    string ans = "NO";
    if (a[a.length() - 1] == b[0] && b[b.length() - 1] == c[0]) ans = "YES";
    cout << ans << endl;
    return 0;
}
