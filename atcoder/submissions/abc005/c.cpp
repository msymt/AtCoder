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
int tmp;
int main() {
    int t, n, m;
    cin >> t >> n;
    int a[n];
    rep(i, n)
            cin >>
        a[i];
    cin >> m;
    int b[m];
    rep(i, m)
            cin >>
        b[i];
    int now = 0;
    rep(i, m) {
        if (now >= n) {
            cout << "no" << endl;
            return 0;
        }
        bool ok = false;
        for (int j = now; j < n; j++) {
            if (b[i] - a[j] >= 0 && b[i] - a[j] <= t) {
                ok = true;
                now = j + 1;
                break;
            }
        }
        if (!ok) {
            cout << "no" << endl;
            return 0;
        }
    }
    cout << "yes" << endl;
    return 0;
}
