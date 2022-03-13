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
    int A, B, W;
    cin >> A >> B >> W;
    int w = W * 1000;
    int mint = 1e9;
    int maxt = -1;
    FOR(i, 1, w + 1) {
        int l = i * A;
        int r = i * B;
        if (l <= w && w <= r) {
            mint = min(mint, i);
            maxt = max(maxt, i);
        }
    }
    if (mint == 1e9)
        cout << "UNSATISFIABLE" << endl;
    else
        cout << mint << " " << maxt << endl;

    return 0;
}
