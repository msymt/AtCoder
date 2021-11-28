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
    cin.tie(0);ios_base::sync_with_stdio(0);
    ll a,b; cin >> a >> b;
    while(a > 0 && b > 0) {
        int d = a % 10; int e = b % 10;
        if(d + e >= 10) {
            cout << "Hard" << endl;
            return 0;
        }
        a /= 10;b /= 10;
    }
    cout << "Easy" << endl;
    return 0;
}
