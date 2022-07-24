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
    if (s.length() < 5) {
        cout << "No" << endl;
        return 0;
    }
    if (s[0] == 'M' && s[1] == 'U' && s[2] == 'J' && s[3] == 'I' && s[4] == 'N') {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
