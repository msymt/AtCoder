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
    ll n, k, q; cin >> n >> k >> q;
    // O(nq) > 1024MBなので，愚直では間に合わない
    vector<int> num(n, 0);
    rep(i, q) {
        int a; cin >> a; a--; // a: i番目に正解した参加者, 0-indexed
        num[a]++; // num[i]:=i人目の正解数
    }
    // k:初期の持点
    // q:問題数
    // num[i]:i人目の正解数
    // q - num[i]:i人目の正解数以外の数 => 減少分
    rep(i, n) {
        if(k - (q - num[i]) <= 0) cout << "No" << endl;
        else cout << "Yes" << endl;
    }
    return 0;
}
