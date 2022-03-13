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

int main(void) {
    int N, K;
    string S;
    cin >> N >> K;
    cin >> S;
    if (S[K - 1] == 'A') {
        S[K - 1] = 'a';
    } else if (S[K - 1] == 'B') {
        S[K - 1] = 'b';
    } else if (S[K - 1] = 'C') {
        S[K - 1] = 'c';
    }
    cout << S << endl;
    return 0;
}
