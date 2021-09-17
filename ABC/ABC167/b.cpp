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
    int a,b,c,k, ans = 0;
    cin >> a >> b >> c >> k;
    if(k <= a) {
        ans = k;
    } else if(k <= a + b) { // k > a
        ans = a;
    } else {
        ans = a - (k - a - b);
    }
    cout << ans << endl;
    return 0;
}
