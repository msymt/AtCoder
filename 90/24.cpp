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

const ll INF = 1LL << 60;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    ll n,k;
    cin>>n>>k;
    ll a[n + 1];
    ll b[n + 1];
    rep(i, n) {
      cin >> a[i];
    }
    rep(i, n) {
      cin >> b[i];
    }
    ll sumt = 0LL;
    rep(i, n) {
      sumt += abs(a[i] - b[i]);
    }
    if(sumt > k) {
      cout << "No" << endl;
      return 0;
    }
    // i.e.操作回数が奇数で，差も奇数ならYes，そうでないならNo
    if(sumt % 2 != k % 2) {
      cout << "No" << endl;
      return 0;
    }

    cout << "Yes" << endl;

    return 0;
}
