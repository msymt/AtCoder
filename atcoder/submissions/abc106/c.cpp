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

// 兆: 10^13
// 5000兆: 5*10^16
// 2: 10^32
// k: 10^18
int main() {
    string s;
    ll k;
    cin >> s >> k;
    rep(i, s.length()) {
        if (s[i] == '1') {
            if (k == 1) {
                cout << "1" << endl;
                return 0;
            } else
                k--;  // 1が連続した場合を考慮
        } else {
            cout << s[i] - '0' << endl;
            return 0;
        }
    }
    return 0;
}
