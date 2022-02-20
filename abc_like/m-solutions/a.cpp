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
    int x; cin >> x;
    int ans;
    if(x >= 400 && x <= 599) ans = 8;
    else if(x >= 600 && x <= 799) ans = 7;
    else if(x >= 800 && x <= 999) ans = 6;
    else if(x >= 1000 && x <= 1199) ans = 5;
    else if(x >= 1200 && x <= 1399) ans = 4;
    else if(x >= 1400 && x <= 1599) ans = 3;
    else if(x >= 1600 && x <= 1799) ans = 2;
    else ans = 1;
    cout << ans << endl;
    return 0;
}
