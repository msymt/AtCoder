#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <string>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
    int N, T;
    cin >> N >> T;
    int c[N + 1];
    int t[N + 1];
    rep(i, N) {
        int ci, ti;
        cin >> ci >> ti;
        c[i] = ci;
        t[i] = ti;
    }
    int _const = 10001;
    int cnt = _const;
    int mint = T;
    rep(i, N) {
        if (T >= t[i] && cnt >= c[i]) {
            mint = t[i];
            cnt = c[i];
        }
    }
    if (mint == T && cnt == _const)
        cout << "TLE" << endl;
    else
        cout << cnt << endl;

    return 0;
}
