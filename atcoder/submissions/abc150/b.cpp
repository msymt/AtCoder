#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <string>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
    int n;
    string s;
    cin >> n >> s;
    int cnt = 0;
    rep(i, n - 2) {
        if (s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C') cnt++;
    }
    cout << cnt << endl;
    return 0;
}
