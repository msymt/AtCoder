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
    cin >> N;
    int a[N];
    int b[5] = {0};
    rep(i, N) cin >> a[i];
    rep(i, N) {
        if (a[i] % 4 == 0)
            b[4]++;
        else if (a[i] % 2 == 0)
            b[2]++;
        else
            b[1]++;
    }
    if (b[2] == 0) {
        if (b[1] <= b[4] + 1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    } else {
        if (b[1] <= b[4])
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
