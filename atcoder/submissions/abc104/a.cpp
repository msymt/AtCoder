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
    int R;
    cin >> R;
    if (R < 1200)
        cout << "ABC" << endl;
    else if (R < 2800)
        cout << "ARC" << endl;
    else
        cout << "AGC" << endl;
    return 0;
}
