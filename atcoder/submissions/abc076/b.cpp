#include <algorithm>
#include <climits>
#include <iostream>
#include <numeric>
#include <set>
#include <string>
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;
int T, N, K;
string s;
int main() {
    int ans = 1;
    cin >> N >> K;
    int cnt = 0;
    while (cnt != N) {
        ans = min(ans * 2, ans + K);
        cnt++;
    }
    cout << ans << endl;
    return 0;
}
