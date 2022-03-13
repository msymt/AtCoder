#include <algorithm>
#include <cmath>
#include <iostream>
#include <numeric>
#include <set>
#include <string>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
    int N, cnt = 0, ans = 0;
    string A, B, C;
    cin >> N >> A >> B >> C;
    rep(i, N) {
        cnt = 0;
        if (A[i] == B[i])
            cnt++;
        if (B[i] == C[i])
            cnt++;
        if (A[i] == C[i])
            cnt++;
        if (cnt == 1)
            ans++;
        if (cnt == 0)
            ans += 2;
    }
    cout << ans << endl;
    return 0;
}
