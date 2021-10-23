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
    string x;
    cin >> x;
    vector<int> zero_index;
    rep(i, x.length()) {
        if(x[i] == '0') {
            zero_index.push_back(i);
            break;
        }
    }
    if(zero_index.size() < 1) {
        cout << x << endl;
    } else {
        rep(i, x.length()) {
            if(zero_index[0] > i) {
                cout << x[i];
            } else {
                cout << "1";
            }
        }
    }
    cout << endl;
    return 0;
}
