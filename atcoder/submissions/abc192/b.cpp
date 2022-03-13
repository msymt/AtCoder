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
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    string s;
    cin >> s;
    bool ans = true;
    // cout << islower(s[0]) << endl;
    // cout << isupper(s[0]) << endl;
    for (int i = 0; i < s.size(); i++) {
        if (i % 2 == 0) {
            if (!islower(s[i])) {
                ans = false;
                break;
            }
        } else {
            if (!isupper(s[i])) {
                ans = false;
                break;
            }
        }
    }
    if (ans)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
