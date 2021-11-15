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
    cin.tie(0);ios_base::sync_with_stdio(0);
    int n; cin >> n;
    int s[n];
    rep(i, n) cin >> s[i];
    bool flag = true;
    int ans = 0;
    vector<bool> check(1010, false);
    for(int a = 1; 3*a <= 1000; a++) {
        for(int b = 1; 4*a*b+3*a+3*b <= 1000; b++) {
            check[4*a*b+3*a+3*b] = true;
        }
    }
    for(int i = 0; i < n; i++) {
        if(!check[s[i]]) ans++;
    }
    cout << ans << endl;
    return 0;
}
