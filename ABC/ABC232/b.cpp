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
    string s, k;
    cin >> s >> k;
    for(int i = 0; i <= 25; i++) {
        strings ss = s;
        for(int j = 0; j < s.size(); j++) {
            // ASCIIコード変換 -> ずらす -> アルファベットの範囲に収める -> 戻す
            ss[j] = ((ss[j] - 'a') + i) % 26 + 'a';
        }
        if(ss == k){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
