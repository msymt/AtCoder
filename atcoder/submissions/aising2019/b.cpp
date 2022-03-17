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

// 1, 2, 3問目の候補の最小値が、コンテストをかいさいできる最大値
int main() {
    int N, A, B;
    cin >> N >> A >> B;
    vector<int> p(N);
    rep(i, N) cin >> p[i];
    int a = 0, b = 0, c = 0;
    rep(i, N) if (p[i] <= A) a++;
    rep(i, N) if (A + 1 <= p[i] and p[i] <= B) b++;
    rep(i, N) if (B + 1 <= p[i]) c++;

    int ans = min(a, min(b, c));
    cout << ans << endl;
    return 0;
}
