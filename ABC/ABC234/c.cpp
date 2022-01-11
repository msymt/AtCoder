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

string toBinary(ll n){
    string r;
    while (n > 0){
        r += ( n % 2 == 0 ? "0" : "1" );
        n /= 2;
    }
    reverse(r.begin(), r.end());
    return r;
}

int main() {
    ll k;cin >> k;
    // 2, 20, 22, 200, 202, 220, 222, 2000, 2002, 2020, 2022, 2200, 2202, 2220, 2222...
    string bin_str = toBinary(k);
    rep(i, bin_str.length()) {
        if(bin_str[i] == '1') {
            cout << '2';
        } else {
            cout << '0';
        }
    }
    cout << endl;
    return 0;
}
