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
    int n, m;
    cin >> n >> m;
    map<string, int> mp;
    vector<string> sv;
    rep(i, n) {
        string s;
        cin >> s;
        sv.push_back(s);
        mp[s]++;
    }
    rep(i, m) {
        string s;
        cin >> s;
        mp[s]++;
    }
    for (auto& s : sv) {
        if (mp[s] == 2) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
