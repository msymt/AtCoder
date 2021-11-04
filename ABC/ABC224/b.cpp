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
int a[51][51];
int main() {
    cin.tie(0);ios_base::sync_with_stdio(0);
    int h,w; cin >> h >> w;
    rep(i, h) rep(j, w) {
        cin >> a[i][j];
    }
    int i = h,j = h,k = w,l = w;
    for(i = 0; i < j; i++) {
        for(j = i + 1; j < h; j++) {
            for(k = 0; k < l; k++) {
                for(l = k + 1; l < w; l++) {
                 if(a[i][k] + a[j][l] > a[j][k] + a[i][l]) {
                     cout << "No" << endl;
                     return 0;
                 }
                }
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}
