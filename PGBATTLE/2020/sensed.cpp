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
int b[20001] = {0};
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n; cin >> n;
    int a[2 * n];
    map<int, int> count;

    rep(i, 2*n) cin >> a[i];
    int cnt = 0;
    for(int i = 0; i < 2 * n; i++) {
        for(int j = i + 1; j < 2 * n; j++) {
            if(a[i] == a[j]) {
                for(int k = i + 1; k < j; k++) {
                    count[a[k]] = 1;
                    cout << a[k] << " " << count[a[k]] << ", ";
                }
                cout << endl;
            }
        }
        b[count.size()]++;
        rep(i, count.size()) cout << b[i] << " ";
        cout << endl;
        count.clear();
    }
    rep(i, 2*n - 1) {
        cout << b[i] << endl;
    }
    return 0;
}
