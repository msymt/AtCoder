#include <algorithm>
#include <cmath>
#include <iostream>
#include <numeric>
#include <set>
#include <string>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;
int N, cnt = 0, ans = 0, tmp = 0;

int main() {
    int A, B;
    cin >> A >> B;
    int C = A + B;
    if (A % 3 == 0 || B % 3 == 0 || C % 3 == 0)
        cout << "Possible" << endl;
    else
        cout << "Impossible" << endl;

    return 0;
}
