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
int ans = 0;
int i_index;
int tmp;
int dh[4] = {1, 0, -1, 0};
int dw[4] = {0, 1, 0, -1};
string board[64];
int main() {
    cin >> N;
    int a[100010];
    rep(i, N) {
        cin >> a[i];
        a[i]--;  // 1 - 2 から 0 - 1へ
    }
    int x = 0;
    rep(i, 100010) {
        if (x == 1) {
            cout << i << endl;
            return 0;
        }
        x = a[x];
    }
    cout << -1 << endl;
    return 0;
}
