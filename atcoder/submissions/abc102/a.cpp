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
    int N, cnt = 0, ans = 0;
    cin >> N;
    if (N % 2 == 0) {
        cout << N << endl;
    } else {
        cout << N * 2 << endl;
    }
    return 0;
}
