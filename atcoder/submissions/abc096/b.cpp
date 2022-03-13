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
    int A[3], K;
    for (int i = 0; i < 3; i++) cin >> A[i];
    cin >> K;
    sort(A, A + 3);
    rep(j, K) {
        A[2] *= 2;
        sort(A, A + 3);
    }
    rep(i, 3) cnt += A[i];
    cout << cnt << endl;
}
