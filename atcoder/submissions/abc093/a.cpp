#include <algorithm>
#include <climits>
#include <iostream>
#include <numeric>
#include <set>
#include <string>
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;
int main() {
    string S;
    cin >> S;
    if (S[0] != S[1] && S[0] != S[2] && S[1] != S[2])
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
