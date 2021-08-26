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
string s;
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    cin >> s;
    ll sum = 0LL;
    string ans = "No";

    rep(i, s.length()) {
        sum += s[i] - '0'; // char -> int
    }
    if(sum % 9 == 0) ans = "Yes";
    cout << ans << endl;
    return 0;
}
