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
    int t;
    cin >> t;
    ll a[t];
    rep(i, t) cin >> a[i];
    rep(i, t) {
        if (a[i] % 4 == 0) {
            cout << "Even" << endl;
        } else if (a[i] % 2 == 0) {
            cout << "Same" << endl;
        } else {
            cout << "Odd" << endl;
        }
    }
    return 0;
}
