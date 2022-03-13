#include <algorithm>
#include <iostream>
#include <numeric>
#include <set>
#include <string>
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;
int N, C[505], S[505], F[505];
;
int main() {
    cin >> N;
    N--;
    REP(i, N)
        cin >> C[i] >> S[i] >> F[i];
    REP(i, N) {
        int ans = 0;
        FOR(j, i, N) {
            ans = max(ans, S[j]);
            int d = ans - S[j];
            if (d % F[j])
                d = F[j] - (d % F[j]);
            else
                d = 0;
            ans += d + C[j];
        }
        cout << ans << endl;
    }
    cout << 0 << endl;
    return 0;
}
