#include <math.h>
#include <memory.h>

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
int N, M;
int cnt = 0;
int ans = 0;
int tmp;
int main() {
    cin >> N;
    ll A[N];
    ll b[100002] = {0};
    rep(i, N) cin >> A[i];
    sort(A, A + N, greater<int>());
    for (int i = 0; i < N - 1; i++) {
        if (A[i] == A[i + 1]) {
            b[cnt] = A[i];
            cnt++;
            i++;
        }
    }
    if (cnt >= 2)
        cout << b[0] * b[1] << endl;
    else
        cout << 0 << endl;
    return 0;
}
