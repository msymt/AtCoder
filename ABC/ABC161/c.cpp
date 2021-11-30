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
// ←↓→↑
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

// ref: https://drken1215.hatenablog.com/entry/2020/04/05/155200

int main() {
    cin.tie(0);ios_base::sync_with_stdio(0);
    ll n, k; cin >> n >> k;
    // n,kに対していくつか試すと，N%KかK-N%Kの2通りを繰り返すことが分かる
    ll ans = min((n % k), k - (n % k));
    // ll ans = n;
    // while(1) {
    //     ll tmp = abs(ans - k);
    //     if(ans > tmp) ans = tmp;
    //     else break;
    //     cout << ans << endl;
    // }
    cout << ans << endl;
    return 0;
}
