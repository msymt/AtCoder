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
    char a, b;
    cin >> a >> b;
    char ans;
    if (a == 'H') {
        if (b == 'H')
            ans = 'H';
        else
            ans = 'D';
    } else {
        if (b == 'H')
            ans = 'D';
        else
            ans = 'H';
    }
    cout << ans << endl;
    return 0;
}
