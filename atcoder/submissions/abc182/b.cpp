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
int cnt_array[1010] = {0};
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    vector<int> a;
    rep(i, n) {
        int ai;
        cin >> ai;
        a.push_back(ai);
    }
    int cnt = 0;
    int max_gcd = 0, max_gcd_cnt = 0;
    for (int i = 2; i <= 1000; i++) {
        cnt = 0;
        for (int j = 0; j < n; j++) {
            if (a[j] % i == 0) {
                cnt++;
            }
        }
        if (max_gcd < cnt) {
            max_gcd = cnt;
            max_gcd_cnt = i;
        }
    }
    cout << max_gcd_cnt << endl;
    return 0;
}
