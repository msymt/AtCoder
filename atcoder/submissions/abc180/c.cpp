#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <string>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;

template <class T>
inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template <class T>
inline bool chmax(T& a, T b) {
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
    ll n;
    cin >> n;
    vector<ll> a;
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            a.push_back(i);
            if (n / i != i) a.push_back(n / i);
        }
    }
    sort(a.begin(), a.end());
    for (auto v : a) cout << v << endl;
    return 0;
}
