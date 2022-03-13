#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
int main() {
    string N;
    cin >> N;
    bool t, f;
    t = (N[0] == N[1] && N[0] == N[2]);
    f = (N[1] == N[2] && N[1] == N[3]);
    if (t || f)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
