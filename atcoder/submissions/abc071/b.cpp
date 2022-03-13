#include <algorithm>
#include <cmath>
#include <iostream>
#include <numeric>
#include <set>
#include <string>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;
int N, cnt = 0, ans = 0, tmp = 0;

int main() {
    char S[111000];
    cin >> S;
    bool app[26];
    rep(i, 26) app[i] = false;
    for (int i = 0; S[i] != '\0'; i++) {
        // cout << S[i] - 'a' << endl;
        // cout <<S[i] - '0' << endl;
        app[S[i] - 'a'] = true;
    }
    rep(i, 26) {
        if (!app[i]) {
            cout << (char)(i + 'a') << endl;
            return 0;
        }
    }
    cout << "None" << endl;
    return 0;
}
