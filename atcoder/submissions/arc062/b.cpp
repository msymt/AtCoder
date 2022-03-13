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
int tmp;
int main() {
    int g = 0;
    int c = 0;
    int p = 0;
    string s;
    cin >> s;
    rep(i, s.size()) {
        if (s[i] == 'g') {  // g
            if (p + 1 > g) {
                g++;
            } else {
                p++;
                ans += 1;
            }
        } else {  //'p'
            if (p + 1 > g) {
                g++;
                ans--;
            } else {
                p++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
