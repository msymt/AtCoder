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
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int a = x2 - x1;
    int b = y2 - y1;
    cout << x2 - b << " " << y2 + a << " " << x1 - b << " " << y1 + a << endl;
    return 0;
}
