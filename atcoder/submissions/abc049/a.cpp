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

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    char c;
    cin >> c;
    string ans = "consonant";
    if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o') {
        ans = "vowel";
    }
    cout << ans << endl;
    return 0;
}
