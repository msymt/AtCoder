#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <vector>
#include <numeric>
#include <map>
#include <queue>
#include <cmath>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for(int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n,m;
    cin >> n >> m;
    vector<vector<int> > S(m);
    rep(i, m) {
        int k; cin >> k;
        rep(j, k) {
            int s; cin >> s;
            s--;
            S[i].push_back(s);
        }
    }
    vector<int> p(m);
    rep(i, m) cin >> p[i];
    
    int ans = 0;
    for(int bit = 0; bit < (1 << n); bit++) {
        bool ok = true;
        for(int i = 0; i < m; i++) {
            int cnt = 0;
            for(auto s : S[i]) {
                if(bit & (1 << s)) cnt++;
            }
            if(cnt % 2 != p[i]) ok = false;
        }
        if(ok) ans++;
    }
    cout << ans << endl;
    return 0;
}