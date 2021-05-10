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
    string s;
    cin >> s;
    string t;
    rep(i, s.size()) {
        if(s[i] != '/') {
            t += s[i];
        }
    }
    if(stoi(t) <= 20190430) cout << "Heisei" << endl;
    else cout << "TBD" << endl;

    return 0;
}