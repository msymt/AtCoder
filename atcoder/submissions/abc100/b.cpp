#include <algorithm>
#include <cmath>
#include <iostream>
#include <numeric>
#include <set>
#include <string>
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;

// 100で何回割り切れるかを数える.
int func(int x) {
    if (x % 100 != 0) {
        return 0;
    }
    return func(x / 100) + 1;
}
int main() {
    int D, N, ans = 0;
    cin >> D >> N;
    for (int x = 1;; x++) {
        // 100でD回割り切れるなら
        if (func(x) == D) {
            ans++;
            if (ans == N) {
                cout << x << endl;
                return 0;
            }
        }
    }
    return 0;
}
