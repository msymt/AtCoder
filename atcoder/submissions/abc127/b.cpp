#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <string>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
    int r, d, x2000;
    cin >> r >> d >> x2000;
    vector<int> x(10009, 0);
    x[0] = x2000;

    for (int i = 1; i < 11; i++) {
        x[i] = r * x[i - 1] - d;
        cout << x[i] << endl;
    }
    return 0;
}
