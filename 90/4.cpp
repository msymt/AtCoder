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

// TLEx1, ACx15, why?

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int h, w;
    cin >> h >> w;
    vector<vector<int> > a(h, vector<int> (w));
    rep(i, h) rep(j, w) cin >> a[i][j];

    vector<int> row(10000, 0);
    vector<int> height(10000, 0);
    rep(i, h) rep(j, w) {
        row[i] += a[i][j];
        height[j] += a[i][j];
    }
    rep(i, h) {
        rep(j, w) {
            cout << row[i] + height[j] - a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}