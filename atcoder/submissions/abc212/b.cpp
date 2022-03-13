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
// ←↓→↑
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

string s;
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    cin >> s;
    int cnt = 0;
    for (int i = 1; i < s.length(); i++) {
        if (s[0] == s[i]) cnt++;
    }
    if (cnt == s.length() - 1) {
        cout << "Weak" << endl;
        return 0;
    }
    cnt = 0;
    rep(i, s.length() - 1) {
        int si = s[i] - '0';
        int sj = s[i + 1] - '0';
        if (((si + 1) % 10) == (sj % 10)) cnt++;
    }
    if (cnt != s.length() - 1)
        cout << "Strong" << endl;
    else
        cout << "Weak" << endl;

    return 0;
}
