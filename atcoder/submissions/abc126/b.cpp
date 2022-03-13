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
typedef long long ll;
int N, M;
int cnt = 0;
int count = 0;
ll ans = 0LL;
int i_index;
int dh[4] = {1, 0, -1, 0};
int dw[4] = {0, 1, 0, -1};
string board[64];

int main(void) {
    string S;
    cin >> S;
    int pre = (S[0] - '0') * 10 + (S[1] - '0');
    int post = stoi(S.substr(2));
    if (0 < pre && pre <= 12 && 0 < post && post <= 12) {
        cout << "AMBIGUOUS" << endl;
    } else if (pre >= 0 && post <= 12 && post > 0) {
        cout << "YYMM" << endl;
    } else if (pre > 0 && pre <= 12 && post >= 0) {
        cout << "MMYY" << endl;
    } else {
        cout << "NA" << endl;
    }
    return 0;
}
