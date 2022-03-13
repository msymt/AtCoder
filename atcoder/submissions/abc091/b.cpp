#include <math.h>

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
int cnt = 0;
int main() {
    map<string, int> mp;
    int N;
    cin >> N;
    string S[N];
    rep(i, N) {
        cin >> S[i];
        mp[S[i]]++;
    }
    int M;
    cin >> M;
    rep(i, M) {
        string T;
        cin >> T;
        mp[T]--;
    }
    int ans = 0;
    rep(i, N) ans = max(ans, mp[S[i]]);
    cout << ans << endl;
    return 0;
}
