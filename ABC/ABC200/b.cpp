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
    ll n, k;
    cin >> n >> k;
    rep(i, k) {
        if(n % 200 == 0) {
            n = n / 200;
        }else {
            n = n * 1000 + 200;
        }
    }
    cout << n << endl;
    return 0;
}