#include <algorithm>
#include <cmath>
#include <iostream>
#include <numeric>
#include <set>
#include <string>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
    int N, cnt = 0, ans = 0, tmp = 0;
    cin >> N;
    int A[N];
    rep(i, N) cin >> A[i];
    int maxt = 0;
    rep(i, N) rep(j, N) {
        if (i != j) {
            tmp = abs(A[i] - A[j]);
            maxt = max(tmp, maxt);
        }
    }
    cout << maxt << endl;
    return 0;
}
