#include <algorithm>
#include <cmath>
#include <iostream>
#include <numeric>
#include <set>
#include <string>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
    int N, A, B;
    cin >> N >> A >> B;
    if (A + B <= N) {
        cout << min(A, B) << " " << 0 << endl;
    } else {
        cout << min(A, B) << " " << A + B - N << endl;
    }
    return 0;
}
