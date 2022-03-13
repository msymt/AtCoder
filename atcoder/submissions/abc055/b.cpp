#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)
int mod = 1e9 + 7;
using namespace std;
int main() {
    int N;
    cin >> N;
    long ans = 1;
    for (int i = 1; i <= N; i++) {
        ans = (ans * i) % mod;
    }
    cout << ans << endl;
    return 0;
}
