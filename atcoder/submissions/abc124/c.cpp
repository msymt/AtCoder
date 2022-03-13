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
    string s;
    cin >> s;
    string a = "", b = "";
    rep(i, s.length()) {
        if (i % 2 == 0) {
            a += "0";
            b += "1";
        } else {
            a += "1";
            b += "0";
        }
    }
    int a_diff = 0, b_diff = 0;
    rep(i, s.length()) {
        if (s[i] != a[i]) a_diff++;
        if (s[i] != b[i]) b_diff++;
    }
    cout << min(a_diff, b_diff) << endl;
    return 0;
}
