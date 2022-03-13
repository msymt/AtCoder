#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <string>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;

template <class T>
inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template <class T>
inline bool chmax(T& a, T b) {
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
int n;
string s[101000];
vector<string> v = {"AC", "WA", "TLE", "RE"};
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    cin >> n;
    rep(i, n) cin >> s[i];
    map<string, int> C;
    rep(i, n) C[s[i]]++;
    for (auto& x : v) {
        cout << x.c_str() << " x " << C[x] << endl;
    }
    return 0;
}
