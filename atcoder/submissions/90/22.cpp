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

template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

ll gcd(ll a, ll b) {
  while(b > 0LL) {
    ll c = a % b;
    a = b;
    b = c;
  }
  return a;
}

const ll INF = 1LL << 60;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    ll a,b,c;
    cin >> a >> b >> c;
    ll ans = gcd(a, gcd(b, c));
    cout << (a / ans - 1) + (b / ans - 1) + (c / ans - 1) << endl;
    return 0;
}
