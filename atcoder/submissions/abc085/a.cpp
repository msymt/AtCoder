#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
int main() {
    string S, s;
    cin >> S;
    for (int i = 4; i < 10; i++)
        s += S[i];
    cout << "2018" << s << endl;
    return 0;
}
