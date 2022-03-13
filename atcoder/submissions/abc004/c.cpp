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
int T, N, M;
string s;
int main() {
    cin >> N;
    N = N % 30;
    int A[6] = {1, 2, 3, 4, 5, 6};
    REP(i, N) {
        int tmp = i % 5;
        swap(A[tmp], A[tmp + 1]);
    }
    s = to_string(A[0]);
    FOR(i, 1, 6)
    s += to_string(A[i]);
    cout << s << endl;
    return 0;
}
