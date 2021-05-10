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

double calc(int t, ll a) {
    return (double)((ll)a * (double)((100 + (double)t)/100));
}

// fail

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int t;
    ll n;
    cin >> t >> n;
    ll con = 1000000000;
    ll cnt = 0LL;
    vector<bool> ans(con, false);
    if((con / n) <= 100) {
        ll l = con * 100 + (n * (con / n) - LL);
        cout << l << endl;
    }else {
        for(ll i = 1; i < con; i++) {
            double tmp = (double)(calc(t, i));
            ll k = (ll)tmp;
            ans[k] = true;
            if(i > 1LL && ans[k - 1LL] == false) {
                cnt++;
                if(cnt == n) {
                    cout << k - 1LL << endl;
                    return 0;
                }
            }
        }
    }
    return 0;
}
