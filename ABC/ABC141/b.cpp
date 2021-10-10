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
    string s; cin >> s;
    bool readable = true;
    rep(i, s.length()) {
        if(i % 2 == 0) {
            if(!(s[i] == 'R' || s[i] == 'U' || s[i] == 'D')) {
                readable = false;
            }
        } else {
            if(!(s[i] == 'L' || s[i] == 'U' || s[i] == 'D')) {
                readable = false;
            }
        }
    }
    if(readable) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
