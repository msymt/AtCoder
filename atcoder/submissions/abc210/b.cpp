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
string s;
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    cin >> n >> s;
    rep(i, n) {
        if (s[i] == '1') {
            if (i % 2 == 0)
                cout << "Takahashi" << endl;
            else
                cout << "Aoki" << endl;
            break;
        }
    }
    return 0;
}
