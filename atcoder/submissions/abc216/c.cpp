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
    ll n;
    cin >> n;
    string ans = "";
    // 操作を逆順に考える
    while (n >= 1) {
        if (n % 2 == 1) {
            ans += "A";
            n--;
        } else {
            ans += "B";
            n /= 2;
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
    return 0;
}
