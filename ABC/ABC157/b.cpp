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
// ←↓→↑
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

int main() {
    cin.tie(0);ios_base::sync_with_stdio(0);
    int a[3][3];
    bool punched[3][3] = {false};
    rep(i, 3) rep(j, 3) cin >> a[i][j];
    int n; cin >> n;
    rep(i, n)  {
        int b; cin >> b;
        rep(i, 3) rep(j, 3) {
            if(a[i][j] == b) punched[i][j] = true;
        }
    }

    bool bingo = false;
    // 横
    for(int i = 0; i < 3; i++) {
        int cnt = 0;
        for(int j = 0; j < 3; j++) {
            if(punched[i][j]) cnt++;
        }
        if(cnt == 3) bingo = true;
    }
    // 縦
    for(int i = 0; i < 3; i++) {
        int cnt = 0;
        for(int j = 0; j < 3; j++) {
            if(punched[j][i]) cnt++;
        }
        if(cnt == 3) bingo = true;
    }
    // 斜め
    if(punched[0][0] && punched[1][1] && punched[2][2]) bingo = true;
    if(punched[2][0] && punched[1][1] && punched[0][2]) bingo = true;

    if(bingo) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
