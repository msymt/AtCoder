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

vector<int> make_primes(int n) {
    vector<int> result, prime(n + 1, 1);
    prime[0] = prime[1] = 0;
    for (int p = 2; p < sqrt(n); p++) {
        if (prime[p]) {
            for (int x = p * 2; x <= n; x += p) {
                prime[x] = 0;
            }
        }
    }
    for (int p = 2; p <= n; p++) {
        if (prime[p]) {
            result.push_back(p);
        }
    }
    return result;
}

int main() {
    int x;
    cin >> x;
    vector<int> vp = make_primes(1000000);
    // x以上の最小値
    int ans = *lower_bound(vp.begin(), vp.end(), x);
    cout << ans << endl;
    return 0;
}
