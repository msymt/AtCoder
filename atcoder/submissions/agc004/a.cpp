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
    ll a[3];
    rep(i, 3) cin >> a[i];
    if (a[0] % 2 == 0 || a[1] % 2 == 0 || a[2] % 2 == 0) {
        cout << 0 << endl;
        return 0;
    }
    sort(a, a + 3);
    cout << a[0] * a[1] << endl;
    return 0;
}
