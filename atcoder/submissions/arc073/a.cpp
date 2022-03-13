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
    cin >> N;
    int T;
    cin >> T;
    int t[N];
    rep(i, N) cin >> t[i];
    rep(i, N - 1) {
        if (t[i + 1] - t[i] >= T)
            ans += T;
        else
            ans += t[i + 1] - t[i];
    }
    ans += T;
    cout << ans << endl;
    return 0;
}
