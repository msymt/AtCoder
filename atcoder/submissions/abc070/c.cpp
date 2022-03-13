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
ll N, M;
int cnt = 0;
ll ans = 0LL;
int tmp;
ll gcd(ll a, ll b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}
int main() {
    cin >> N;
    ll T[N];
    for (ll i = 0; i < N; i++) cin >> T[i];
    ans = 1LL;
    for (ll i = 0; i < N; i++) {
        ans = (ll)lcm(T[i], ans);
    }
    cout << (ll)ans << endl;
    return 0;
}
