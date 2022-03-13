#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    int L = A + B;
    int R = C + D;
    if (L == R)
        cout << "Balanced" << endl;
    else if (L > R)
        cout << "Left" << endl;
    else
        cout << "Right" << endl;

    return 0;
}
