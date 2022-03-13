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
    int N, cnt = 0, ans = 0, tmp = 0;
    int A, B;
    cin >> A >> B;
    if (A * B % 2 == 1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
