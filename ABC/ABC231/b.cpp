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
    int n; cin >> n;
    map<string, int> m;
    rep(i, n) {
        string s; cin >> s;
        m[s]++;
    }
    int max_t = 0; string res = "";
    for(auto&& x: m) {
        if(x.second > max_t) {
            max_t = x.second;
            res = x.first;
        }
    }
    cout << res << endl;
    return 0;
}
