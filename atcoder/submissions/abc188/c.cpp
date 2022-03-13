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
    int n;
    cin >> n;
    int N = (int)pow(2, n);
    int a[N];
    rep(i, N) cin >> a[i];
    int left_max_val = *max_element(a + 0, a + (int)N / 2);
    int right_max_val = *max_element(a + (int)N / 2, a + N);
    int second_max_val = min(left_max_val, right_max_val);
    rep(i, N) {
        if (a[i] == second_max_val) {
            cout << i + 1 << endl;
            break;
        }
    }
    return 0;
}
