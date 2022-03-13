#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;
int N, F[101][11], P[101][11];
int main() {
    cin >> N;
    REP(i, N)
        REP(j, 10) cin >> F[i][j];
    REP(i, N)
        REP(j, 11) cin >> P[i][j];
    int ans = (-1) * INT_MAX / 2;
    for (int msk = 1; msk < 1 << 10; msk++) {
        int sm = 0;
        REP(i, N) {
            int c = 0;
            REP(j, 10)
            if (msk & (1 << j)) if (F[i][j]) c++;
            sm += P[i][c];
        }
        ans = max(ans, sm);
    }
    cout << ans << endl;
    return 0;
}
