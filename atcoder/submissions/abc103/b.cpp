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
    cin >> s >> t;
    if (s == t) {
        cout << "Yes" << endl;
        return 0;
    }
    rep(i, s.length()) {
        s = s.back() + s.substr(0, s.size() - 1);
        if (s == t) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
