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
int T, N, K, cnt;
string S;
int main() {
    cnt = 0;
    cin >> S;
    int ans[26] = {0};
    REP(i, S.size()) {
        REP(j, S.size()) {
            if (S[i] == S[j] && i != j) {
                cout << "no" << endl;
                return 0;
            }
        }
    }
    cout << "yes" << endl;
    return 0;
}
