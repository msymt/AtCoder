#include <math.h>
#include <memory.h>

#include <algorithm>
#include <climits>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <string>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rrep(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;
int N, M;
int cnt = 0;
ll ans = 0LL;
int i_index;
ll tmp;
int dh[4] = {1, 0, -1, 0};
int dw[4] = {0, 1, 0, -1};
string board[64];
int main() {
    int H, W;
    cin >> H >> W;
    rep(i, H) cin >> board[i];
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            tmp = 0;
            if (board[i][j] == '#') {
                cnt++;
                for (int k = 0; k < 4; k++) {
                    int x = i + dh[k];
                    int y = j + dw[k];
                    if (x <= H && y <= W && x >= 0 && y >= 0 && board[x][y] == '#')
                        tmp++;
                }
                if (tmp >= 1)
                    continue;
                else {
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}
