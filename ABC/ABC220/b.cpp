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

ll calc_ans(string s, int k) {
    ll ans = 0;
    rep(i, s.length()) {
        ans += (s[s.length() - 1 - i] - '0') * pow(k, i);
    }
    return ans;
}

int main() {
    cin.tie(0);ios_base::sync_with_stdio(0);
    int k;
    string a, b;
    cin >> k >> a >> b;
    ll ans_a = calc_ans(a, k);
    ll ans_b = calc_ans(b, k);
    cout << ans_a * ans_b << endl;
    return 0;
}
