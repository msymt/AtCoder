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

int main() {
    int n; cin >> n;
    vector<int> x(n), y(n);
    rep(i, n) {
        cin >> x[i] >> y[i];
    }
    double ans = -1.0;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            double xi = x[i] - x[j];
            double yi = y[i] - y[j];
            ans = max(ans, (double)(xi*xi + yi*yi));
        }
    }
    printf("%.10lf\n", sqrt((double)ans));
    return 0;
}
