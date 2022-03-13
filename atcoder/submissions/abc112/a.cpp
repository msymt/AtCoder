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

int main() {
    int N, cnt = 0, ans = 0, tmp = 0;
    int A, B;
    cin >> N;
    if (N == 1) {
        cout << "Hello World" << endl;
        return 0;
    } else if (N == 2) {
        cin >> A >> B;
        cout << A + B << endl;
    }
    return 0;
}
