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

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int h,w;
    int ah, aw;
    cin >> h >> w;

    vector<string> t;
    rep(i, h) {
        string a;
        cin >> a;
        t.push_back(a);
    }
    vector<bool> row(h, false);
    vector<bool> col(w, false);
    rep(i, h) rep(j, w) {
        if(t[i][j] == '#') {
            row[i] = true;
            col[j] = true;
        }
    }
    rep(i, h) {
        if(row[i]) {
            rep(j, w) {
                if(col[j]) cout << t[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}