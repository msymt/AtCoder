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
    int N, mint = 10000, maxt = 0;
    cin >> N;
    int a[N];
    rep(i, N) cin >> a[i];
    rep(i, N) {
        mint = min(mint, a[i]);
        maxt = max(maxt, a[i]);
    }
    cout << maxt - mint << endl;
    return 0;
}
