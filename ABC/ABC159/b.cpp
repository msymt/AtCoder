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

int main() {
    cin.tie(0);ios_base::sync_with_stdio(0);
    bool tuyoi = true;
    string s; cin >> s;
    string t = s;
    reverse(s.begin(), s.end());
    rep(i, s.length()) {
        if(s[i] != t[i]) {
            tuyoi = false;
            break;
        }
    }

    int n = s.length();
    string u = s.substr(0, (n - 1)/2);
    string r = u;
    reverse(r.begin(), r.end());
    rep(i, r.length()) {
        if(r[i] != u[i]) {
            tuyoi = false;
            break;
        }
    }
    string a = s.substr((n+3)/2 - 1);
    string b = a;
    reverse(a.begin(), a.end());
    rep(i, a.length()) {
        if(a[i] != b[i]) {
            tuyoi = false;
            break;
        }
    }
    if(tuyoi) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
