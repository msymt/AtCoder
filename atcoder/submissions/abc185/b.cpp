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
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n, m, t;
    cin >> n >> m >> t;
    int left_time = n;
    int prev_time = 0;
    bool flag = true;
    rep(i, m) {
        int ai, bi;
        cin >> ai >> bi;
        left_time -= (ai - prev_time);  // ai: new, prev_time: previous caffe
        if (left_time <= 0) {
            flag = false;
        }
        left_time += (bi - ai);
        left_time = min(left_time, n);  // upper: n

        prev_time = bi;  // update
    }
    left_time -= (t - prev_time);
    if (left_time <= 0) {
        flag = false;
    }

    if (flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
