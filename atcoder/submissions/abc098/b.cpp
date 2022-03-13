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
    int N;
    cin >> N;
    string S;
    cin >> S;
    int alpha[1000];
    int maxt = 0;
    for (int i = 1; i < N; i++) {
        cnt = 0;
        for (int j = 0; j < 1000; j++) {
            alpha[j] = 0;
        }
        for (int j = i; j < N; j++) {
            for (int k = 0; k < i; k++) {
                if (S[j] == S[k] && alpha[S[k]] == 0) {
                    cnt++;
                    alpha[S[j]] = 1;
                }
            }
        }
        maxt = max(maxt, cnt);
    }

    cout << maxt << endl;

    return 0;
}
