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
    int v, a, b, c;
    cin >> v >> a >> b >> c;
    while (v >= 0) {
        v -= a;
        if (v < 0) {
            cout << "F" << endl;
            return 0;
        }
        v -= b;
        if (v < 0) {
            cout << "M" << endl;
            return 0;
        }
        v -= c;
        if (v < 0) {
            cout << "T" << endl;
            return 0;
        }
    }
    return 0;
}
