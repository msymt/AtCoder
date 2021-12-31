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

// > 準優勝する、すなわち最後に行われる対戦において負ける選手の番号を求めてください。
// 完全二分木の内，前半と後半の葉それぞれの最大値を求め，それら2つの小さい方が準優勝する．
int main() {
    int n; cin >> n;
    int N = (int)pow(2, n);
    int a[N]; rep(i, N) cin >> a[i];
    int left_max_val = *max_element(a + 0, a + (int)N/2);
    int right_max_val = *max_element(a + (int)N/2, a + N);
    int second_max_val = min(left_max_val, right_max_val);
    rep(i, N) {
        if(a[i] == second_max_val) {
            cout << i + 1<< endl;
            break;
        }
    }
    return 0;
}
