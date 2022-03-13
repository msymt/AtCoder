#include <math.h>
#include <memory.h>

#include <algorithm>
#include <climits>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <string>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rrep(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;
int N, M;
int cnt = 0;
int ans = 0;
int main() {
    int A, B, X;
    cin >> A >> B >> X;
    if (A == X) {
        cout << "YES" << endl;
    } else if (A < X && A + B > X) {
        cout << "YES" << endl;
    } else if (A > X) {
        cout << "NO" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
