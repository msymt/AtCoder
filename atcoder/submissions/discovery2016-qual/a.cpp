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
    int w;
    cin >> w;
    string s = "DiscoPresentsDiscoveryChannelProgrammingContest2016";
    if (w >= s.length())
        cout << s << endl;
    else {
        int x = 0;
        while (x < s.length()) {
            for (int i = x; i < x + w && i < s.length(); i++) {
                cout << s[i];
            }
            x += w;
            cout << endl;
        }
    }
    return 0;
}
