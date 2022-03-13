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
int N;
string S;
int main() {
    int cnt = 0;
    cin >> N;
    int t[N], d[N], m[N];
    REP(i, N)
        cin >> t[i] >> d[i] >> m[i];
    REP(i, N) {
        if (t[i] + 10 <= d[i])
            cnt += m[i];
    }
    cout << cnt << endl;
    return 0;
}
