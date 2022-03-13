#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <string>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int x, y;
    cin >> x >> y;
    int a[7] = {1, 3, 5, 7, 8, 10, 12};
    int b[4] = {4, 6, 9, 11};
    int c[1] = {2};
    bool flag1 = false;
    bool flag2 = false;
    rep(i, 7) {
        if (a[i] == x)
            flag1 = true;
        else if (a[i] == y)
            flag2 = true;
    }
    if (flag1 && flag2) {
        cout << "Yes" << endl;
        return 0;
    }
    flag1 = false;
    flag2 = false;
    rep(i, 4) {
        if (b[i] == x)
            flag1 = true;
        else if (b[i] == y)
            flag2 = true;
    }
    if (flag1 && flag2) {
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
    return 0;
}
