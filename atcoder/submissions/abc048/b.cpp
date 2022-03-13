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
ll cnt = 0LL;
int ans = 0;
int tmp;
int main() {
    ll a, b, x;
    cin >> a >> b >> x;
    cnt += b / x;
    if (a >= 1)
        cnt -= (a - 1) / x;
    else
        cnt += 1;

    cout << cnt << endl;
    return 0;
}
