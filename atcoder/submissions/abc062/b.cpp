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
    int H, W;
    cin >> H >> W;
    string s[H];
    rep(i, H) cin >> s[i];
    rep(i, W + 2) cout << '#';
    cout << endl;
    rep(i, H) cout << '#' << s[i] << '#' << endl;
    rep(i, W + 2) cout << '#';
    cout << endl;
    return 0;
}
