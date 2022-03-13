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
ll cnt = 0;
int ans = 0;
int tmp;
int main() {
    ll Q, H, S, D;
    cin >> Q >> H >> S >> D >> N;
    ll a = min(2 * Q, H);  // 0.5
    ll b = min(2 * a, S);  // 1.0
    ll c = min(2 * b, D);  // 2.0
    if (N > 1) {
        if (N % 2 == 0) {
            cnt = c * (N / 2);
        } else {
            cnt = c * (N / 2) + b;
        }
    } else
        cnt = b;
    cout << cnt << endl;
    return 0;
}
