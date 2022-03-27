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

template <class T>
inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template <class T>
inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

const ll INF = 1LL << 60;

int main() {
    int m, d;
    cin >> m >> d;
    int cnt = 0;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= d; j++) {
            int d1 = j % 10;
            int d10 = (j / 10) % 10;
            if (d1 * d10 == i && d1 >= 2 && d10 >= 2) {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
