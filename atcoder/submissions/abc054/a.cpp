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
    int a, b;
    cin >> a >> b;
    string ans;
    if (a == 1) a = 14;
    if (b == 1) b = 14;
    if (a > b)
        ans = "Alice";
    else if (a < b)
        ans = "Bob";
    else
        ans = "Draw";
    cout << ans << endl;
    return 0;
}
