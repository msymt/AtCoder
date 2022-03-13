#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
string board[60];
int main() {
    int H, W;
    cin >> H >> W;
    int dh[8] = {1, 1, 0, -1, -1, -1, 0, 1};
    int dw[8] = {0, 1, 1, 1, 0, -1, -1, -1};
    for (int i = 0; i < H; i++)
        cin >> board[i];
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            int count = 0;
            if (board[i][j] == '.') {
                for (int k = 0; k < 8; k++) {
                    int x = i + dh[k];
                    int y = j + dw[k];
                    if (x <= H && y <= W && x >= 0 && y >= 0 && board[x][y] == '#')
                        count++;
                }
                board[i][j] = '0' + count;
            }
        }
    }
    for (int i = 0; i < H; i++)
        cout << board[i] << endl;
    return 0;
}
