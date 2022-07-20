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
    if (s[0] == s[1] && s[0] != s[2])
        cout << s[2] << endl;
    else if (s[0] == s[2] && s[0] != s[1])
        cout << s[1] << endl;
    else if (s[1] == s[2] && s[1] != s[0])
        cout << s[0] << endl;
    else if (s[0] != s[1] && s[1] != s[2])
        cout << s[0] << endl;
    else
        cout << -1 << endl;
    return 0;
}
