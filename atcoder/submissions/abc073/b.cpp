#include <algorithm>
#include <cmath>
#include <iostream>
#include <numeric>
#include <set>
#include <string>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
    int N, cnt = 0, ans = 0, tmp = 0;
    cin >> N;
    int l[N], r[N];
    rep(i, N) cin >> l[i] >> r[i];
    rep(i, N) {
        ans += r[i] - l[i] + 1;
    }
    cout << ans << endl;
    return 0;
}
