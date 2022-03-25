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
    int n;
    string t;
    cin >> n >> t;
    int x = 0, y = 0;
    int dir = 0;
    rep(i, n) {
        if (t[i] == 'S') {
            if (dir % 4 == 0)
                x++;
            else if (dir % 4 == 1)
                y--;
            else if (dir % 4 == 2)
                x--;
            else
                y++;
        } else {
            dir = (dir + 1) % 4;
        }
    }
    cout << x << " " << y << endl;
    return 0;
}
