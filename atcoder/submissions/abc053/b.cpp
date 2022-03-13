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
int i_index;
int tmp;
int main() {
    string s;
    cin >> s;
    int acn = 0;
    int zcn = 0;
    rep(i, s.size()) {
        if (s[i] == 'A') {
            acn = i;
            break;
        }
    }
    for (int i = s.size() - 1; i >= 0; i--) {
        if (s[i] == 'Z') {
            zcn = i;
            break;
        }
    }
    cout << zcn - acn + 1 << endl;
    return 0;
}
