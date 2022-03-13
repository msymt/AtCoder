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
int i_index;
int tmp;
int main() {
    int K, S;
    cin >> K >> S;
    rep(i, K + 1) rep(j, K + 1) {
        tmp = S - i - j;
        if (tmp <= K && i + j <= S && i <= K && j <= K)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}
