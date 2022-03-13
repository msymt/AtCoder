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
    string s, t;
    cin >> s;
    rep(i, s.length()) {
        if ((i + 1) % 2 == 1)
            t += s[i];
    }
    cout << t << endl;
    return 0;
}
