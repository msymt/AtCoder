#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
int main() {
    int A, B;
    int cnt = 0;
    string S;
    cin >> A >> B;
    cin >> S;
    REP(i, A) {
        if (S[i] != '-')
            cnt++;
    }
    if (S[A] == '-')
        cnt++;
    FOR(i, A + 1, A + B + 1) {
        if (S[i] != '-')
            cnt++;
    }
    if (cnt == A + B + 1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
