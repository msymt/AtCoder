#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <vector>
#include <numeric>
#include <map>
#include <cmath>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for(int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;

ll getDigit(ll num) {
    int digit = 0;
    while(num > 0) {
        num /= 10;
        digit++;
    }
    return digit;
}

int main(){
    ll n;
    cin >> n;
    int ans = 1e9;
    int cur = 0;
    for(ll i = 1LL; (i * i) <= n; i++) {
        if(n % i != 0) continue;
        ll j = n / i;
        cur = max(getDigit(i), getDigit(j));
        ans = min(ans, cur);
    }
    
    cout << ans << endl;

    return 0;
}