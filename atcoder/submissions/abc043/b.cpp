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
    string S[11];
    cin >> s;
    rep(i, s.size()) {
        if (s[i] == '0') {
            S[cnt] = '0';
            cnt++;
        } else if (s[i] == '1') {
            S[cnt] = '1';
            cnt++;
        } else {
            if (cnt != 0) {
                S[cnt] = "\0";
                cnt--;
            }
        }
    }
    rep(i, cnt) cout << S[i];
    cout << endl;
    return 0;
}
