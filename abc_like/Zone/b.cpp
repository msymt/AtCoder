#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <vector>
#include <numeric>
#include <map>
#include <cmath>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for(int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
    int n, d, h;
    cin >> n >> d >> h;
    vector<int> dp;
    vector<int> hp;

    rep(i, n){
        int di, hi;
        cin >> di >> hi;
        dp.push_back(di);
        hp.push_back(hi);
    }
    double maxb = 0.0;
    rep(i, n) {
        int di = dp[i];
        int hi = hp[i];
        double b = (double)((double)(d*hi - di*h) / (double)(d - di));
        if(b >= 0.0) maxb = max(maxb, b);
    }
    // cout << maxb << endl;
    if(maxb < 0.1) {
        cout << "0.0" << endl;
    } else {
        cout << maxb << endl;
    }

    return 0;
}