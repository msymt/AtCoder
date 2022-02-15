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
long long GCD(long long a, long long b) {return b?GCD(b,a%b):a;}
long long LCM(long long a, long long b) {return a/GCD(a,b)*b;}
using namespace std;
using ll = long long;

int main() {
    ll n; cin >> n;
    ll res = 1;
    for(ll i = 1; i <= n; i++) {
        res = LCM(res, i);
    }
    cout << res + 1 << endl;
    return 0;
}
