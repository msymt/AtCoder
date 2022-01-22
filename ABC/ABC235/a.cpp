#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <vector>
#include <numeric>
#include <map>
#include <queue>
#include <cmath>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for(int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;

template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

const ll INF = 1LL << 60;

int main() {
    string x; cin >> x;
    int ans = 0;
    // 100a + 10b + c, 100b + 10a + c, 100c + 10a + b
    // 111(a + b + c)
    ans += x[0] - '0';
    ans += x[1] - '0';
    ans += x[2] - '0';
    cout << ans * 111 << endl;
    return 0;
}
