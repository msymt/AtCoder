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
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    if (a > b) {
        int ans1 = x + (a - b - 1) * y;
        int ans2 = ((a - b) * 2 - 1) * x;
        cout << min(ans1, ans2) << endl;
    } else {
        int ans1 = x + (b - a) * y;
        int ans2 = ((b - a) * 2 + 1) * x;
        cout << min(ans1, ans2) << endl;
    }
    return 0;
}
