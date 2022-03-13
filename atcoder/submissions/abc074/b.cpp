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
int N, M, K;
int main() {
    cin >> N >> K;
    int x[N];
    rep(i, N) cin >> x[i];
    rep(i, N) {
        if (K - x[i] > x[i])
            cnt += 2 * x[i];
        else
            cnt += 2 * (K - x[i]);
    }
    cout << cnt << endl;
    return 0;
}
