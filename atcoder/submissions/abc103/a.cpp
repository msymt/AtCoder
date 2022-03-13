#include <algorithm>
#include <cmath>
#include <iostream>
#include <numeric>
#include <set>
#include <string>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
    int N, cnt = 0, ans = 0, tmp = 0;
    int a, b, c;
    cin >> a >> b >> c;
    int maxt = max(max(a, b), c);
    int mint = min(min(a, b), c);
    cout << maxt - mint << endl;
    return 0;
}
