#include <algorithm>
#include <iostream>
#include <numeric>
#include <set>
#include <string>
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;
int ans[1010][1010];
int A[101010];
int H, W, N;
int main() {
    cin >> H >> W >> N;
    REP(i, N)
        cin >> A[i];
    int cnt = 0;
    REP(y, H) {
        REP(x, W) {
            ans[y][x] = cnt + 1;
            A[cnt]--;
            if (!A[cnt])
                cnt++;
        }
    }
    REP(y, H) {
        REP(_x, W) {
            int x;
            if (y % 2 == 0)
                x = _x;
            else
                x = W - 1 - _x;
            if (_x)
                cout << " ";
            cout << ans[y][x];
        }
        cout << endl;
    }
    return 0;
}
