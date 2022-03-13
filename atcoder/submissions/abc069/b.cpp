#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
int main() {
    string s;
    cin >> s;
    cout << s[0] << s.size() - 2 << s[s.size() - 1] << endl;
    return 0;
}
