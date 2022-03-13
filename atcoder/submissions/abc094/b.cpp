#include <math.h>
#include <memory.h>

#include <algorithm>
#include <climits>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <string>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rrep(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;
int N, M;
int cnt = 0;
int main() {
    int X;
    cin >> N >> M >> X;
    int A[M];
    int sum[101] = {0};
    rep(i, M) {
        cin >> A[i];
        sum[A[i]]++;
    }
    int ans = 0;
    for (int i = X; i >= 0; i--) {
        ans += sum[i];
    }
    int Ans = 0;
    for (int i = X; i <= N; i++) {
        Ans += sum[i];
    }
    cout << min(ans, Ans) << endl;
    return 0;
}
