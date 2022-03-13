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
int main() {
    int N, ans = 0, cnt = 0;
    cin >> N;
    int A[N];
    rep(i, N) cin >> A[i];
    sort(A, A + N);
    rep(i, N) {
        cnt = 1;
        while (A[i] == A[i + 1]) {
            cnt++;
            i++;
        }
        if (cnt % 2 == 1) ans++;
    }
    cout << ans << endl;
    return 0;
}
