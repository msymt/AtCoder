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
    int D[200010] = {0};
    int T[200010] = {0};
    rep(i, N) cin >> D[i];
    cin >> M;
    rep(i, M) cin >> T[i];
    map<int, int> mpD, mpT;
    rep(i, N) mpD[D[i]]++;
    rep(i, M) mpT[T[i]]++;
    rep(i, M) {
        int x = T[i];
        if (mpD[x] < mpT[x]) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
