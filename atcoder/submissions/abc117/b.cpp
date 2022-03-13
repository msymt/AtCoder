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
int count = 0;
ll ans = 0LL;
int i_index;
int dh[4] = {1, 0, -1, 0};
int dw[4] = {0, 1, 0, -1};
string board[64];

int main() {
    int N, maxt = 0;
    cin >> N;
    int L[N];
    rep(i, N) cin >> L[i];
    sort(L, L + N);
    maxt = L[N - 1];
    for (int i = 0; i < N - 1; i++) {
        ans += L[i];
    }
    if (maxt < ans)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
