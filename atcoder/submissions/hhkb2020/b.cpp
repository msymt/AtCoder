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
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i, h) cin >> s[i];
    int ans = 0;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w - 1; j++) {
            char s1 = s[i][j], s2 = s[i][j + 1];
            if (s1 == '.' && s2 == '.') ans++;
        }
    }
    for (int i = 0; i < h - 1; i++) {
        for (int j = 0; j < w; j++) {
            if (s[i][j] == '.' && s[i + 1][j] == '.') ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
