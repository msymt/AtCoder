#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <string>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
    string s;
    cin >> s;
    int mid = 0;

    if (s[0] != 'A') {
        cout << "WA" << endl;
        return 0;
    }

    for (int i = 2; i < s.length() - 1; i++) {
        if (s[i] == 'C') mid++;
    }
    if (mid != 1) {
        cout << "WA" << endl;
        return 0;
    }
    int cnt = 0;
    for (int i = 0; i < s.length(); i++) {
        if (isupper(s[i])) cnt++;
    }
    if (cnt > 2) {
        cout << "WA" << endl;
        return 0;
    }
    // if(isupper(s[s.length() - 1])) {
    //   cout << "WA" << endl;
    //   return 0;
    // }

    cout << "AC" << endl;
    return 0;
}
