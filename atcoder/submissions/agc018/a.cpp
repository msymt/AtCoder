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
    int K;
    cin >> N >> K;
    cnt = N;
    int A[300000] = {0};
    int maxv = 0;
    rep(i, N) {
        cin >> A[i];
        maxv = max(maxv, A[i]);
    }
    rep(i, N) {
        if (A[i] == K) {
            cout << "POSSIBLE" << endl;
            return 0;
        }
    }
    if (K > maxv)
        cout << "IMPOSSIBLE" << endl;
    else {
        sort(A, A + N);
        rep(i, N - 1) {
            tmp = abs(A[i] - A[i + 1]);
            if (tmp != 0) {
                if (tmp == 1 || K % tmp == 0) {
                    cout << "POSSIBLE" << endl;
                    return 0;
                }
            }
        }
        cout << "IMPOSSIBLE" << endl;
    }
    return 0;
}
