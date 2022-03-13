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
int n;
string x, a[100010];
vector<string> b;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    cin >> n;
    cin >> x;
    rep(i, n) cin >> a[i];

    rep(i, n) {
        if (a[i] != x) {
            b.push_back(a[i]);
        }
    }
    rep(i, b.size()) {
        cout << b[i];
        if (i != b.size() - 1) cout << " ";
    }
    cout << endl;
    return 0;
}
