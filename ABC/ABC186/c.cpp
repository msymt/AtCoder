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

string convert_to_oct(int n) {
    string res;
    while(n > 0) {
        res = to_string(n % 8) + res;
        n /= 8;
    }
    return res;
}

int main() {
    int n; cin >> n;
    int cnt = 0;
    for(int i = 1; i <= n; i++) {
        string s = to_string(i);
        string s_oct = convert_to_oct(i);
        if(s.find("7") == string::npos && s_oct.find("7") == string::npos) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
