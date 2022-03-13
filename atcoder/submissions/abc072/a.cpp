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
    int a[N];
    rep(i, N) cin >> a[i];
    int sum[100010] = {0};
    rep(i, N) {
        sum[a[i]]++;
        if (a[i] - 1 >= 0)
            sum[a[i] - 1]++;
        if (a[i] + 1 <= 100000)
            sum[a[i] + 1]++;
    }
    ll maxv = sum[0];
    rrep(i, 1, 100002) {
        if (sum[i] != 0) {
            if (maxv < sum[i])
                maxv = sum[i];
        }
    }
    cout << maxv << endl;
    return 0;
}
