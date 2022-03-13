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
int main() {
    int A, B, K;
    cin >> A >> B >> K;
    if (B - A + 1 >= 2 * K) {
        for (int i = 0; i < K; i++)
            cout << A + i << endl;
        for (int i = K - 1; i >= 0; i--)
            cout << B - i << endl;
    } else {
        for (int i = A; i <= B; i++)
            cout << i << endl;
    }
    return 0;
}
