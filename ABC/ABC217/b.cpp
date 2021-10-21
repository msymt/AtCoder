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
const int HOLD_NUM = 3;
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    string contests[4] = {"ABC" , "ARC" , "AGC" , "AHC"};
    bool is_held[4] = {false};
    string is_holding[HOLD_NUM];
    rep(i, HOLD_NUM) cin >> is_holding[i];
    for(int i = 0; i < HOLD_NUM; i++) {
        for(int j = 0; j < 4; j++) {
            if(is_holding[i] == contests[j]) {
                is_held[j] = true;
                break;
            }
        }
    }
    rep(i, 4) {
        if(is_held[i] == false) {
            cout << contests[i] << endl;
            break;
        }
    }
    return 0;
}
