#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <string>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
    long n, t, a;
    cin >> n >> t >> a;
    vector<long> h;
    rep(i, n) {
        long hi;
        cin >> hi;
        h.push_back(hi);
    }
    vector<long> ans;
    double mint = INT32_MAX;
    long num = 0;
    rep(i, n) {
        double temp = t - h[i] * 0.006;
        double ans = fabs(a - temp);
        if (mint >= ans) {
            mint = ans;
            num = i + 1;
        }
    }
    cout << num << endl;
}
