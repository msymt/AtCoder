#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
int main() {
    int A, B, C;
    cin >> A >> B >> C;
    if (A == B)
        cout << C << endl;
    if (A == C)
        cout << B << endl;
    if (B == C)
        cout << A << endl;
    return 0;
}
