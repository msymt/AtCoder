#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
int main() {
    double a, b;
    cin >> a >> b;
    double x = (a + b) / 2.0;
    if (x - (int)x >= 0.5)
        x += 1;
    cout << (int)x << endl;
    return 0;
}
