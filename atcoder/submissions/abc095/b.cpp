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
string a[64];
int main() {
    int X;

    cin >> N >> X;
    int a[N];
    rep(i, N) {
        cin >> a[i];
        X -= a[i];
        cnt++;
    }
    int minv = a[0];
    rep(i, N) {
        minv = min(minv, a[i]);
    }
    while (X >= minv) {
        X -= minv;
        cnt++;
    }
    cout << cnt << endl;

    return 0;
}
