#include <algorithm>
#include <iostream>
#include <numeric>
#include <set>
#include <string>
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;
long x, y;
int main() {
    cin >> x >> y;
    long cnt = 0;
    if (x == y) {
        cout << cnt << endl;
        return 0;
    } else if (x >= 0 && y >= 0) {  //+ +
        if (y >= x)
            cnt = y - x;
        else if (y == 0)
            cnt = x - y + 1;
        else
            cnt = x - y + 2;
    } else if (x > 0 && y < 0) {  //+ -
        if (x >= abs(y))
            cnt = x - abs(y) + 1;
        else
            cnt = abs(y) - x + 1;
    } else if (x < 0 && y < 0) {  //- -
        if (x < y)
            cnt = y - x;
        else
            cnt = abs(y) - abs(x) + 2;
    } else if (x < 0 && y > 0) {  //- +
        if (abs(x) > y)
            cnt = abs(x) - y + 1;
        else
            cnt = y - abs(x) + 1;
    } else if (x < 0 && y == 0) {  //- 0
        cnt = abs(x);
    } else {  // 0 -
        cnt = abs(y) + 1;
    }
    cout << cnt << endl;
    return 0;
}
