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
    string s,t;
    cin >> s >> t;
    string ans = "No";
    if(s == t) ans = "Yes";
    
    rep(i, s.length()) {
        if(s[i] != t[i]) {
            if(i > 0) {
                swap(s[i-1], s[i]);
                if(s == t) ans = "Yes";
                swap(s[i-1], s[i]);
            }
            if (s.length() > i + 1) {
                swap(s[i], s[i+1]);
                if(s == t) ans = "Yes";
                swap(s[i], s[i+1]);
            }
            if(ans == "Yes") break;
        }
    }
    cout << ans << endl;
    return 0;
}
