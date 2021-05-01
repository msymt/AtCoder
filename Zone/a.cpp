#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <vector>
#include <numeric>
#include <map>
#include <cmath>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for(int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
    string s;
    cin >> s;
    int cnt = 0;
    rep(i, s.length() - 2) {
        if(s[i] == 'Z' && s[i + 1] == 'O' && s[i + 2] == 'N' && s[i + 3] == 'e') cnt++;
    }
    cout << cnt << endl;
    return 0;
}