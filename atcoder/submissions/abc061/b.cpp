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
int dh[4] = {1, 0, -1, 0};
int dw[4] = {0, 1, 0, -1};
string board[64];

int main() {
    int nmax = 50;
    cin >> N >> M;
    int a[nmax], b[nmax];
    int cnt[nmax];
    rep(i, nmax) cnt[i] = 0;
    rep(i, M) cin >> a[i] >> b[i];
    rep(i, M) {
        cnt[a[i] - 1]++;
        cnt[b[i] - 1]++;
    }
    rep(i, N) cout << cnt[i] << endl;
    return 0;
}
