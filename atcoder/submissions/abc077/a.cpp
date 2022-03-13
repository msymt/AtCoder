#include <math.h>

#include <algorithm>
#include <climits>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <string>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rrep(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;
int cnt = 0;
int N;
int main() {
    cin >> N;
    int A[N], B[N], C[N];
    rep(i, N) cin >> A[i];
    rep(i, N) cin >> B[i];
    rep(i, N) cin >> C[i];
    sort(A, A + N);
    sort(C, C + N);
    ll ans = 0;
    for (int b = 0; b < N; b++) {
        ll a = lower_bound(A, A + N, B[b]) - A;
        ll c = N - (upper_bound(C, C + N, B[b]) - C);
        ans += a * c;
    }
    cout << ans << endl;
    return 0;
}
