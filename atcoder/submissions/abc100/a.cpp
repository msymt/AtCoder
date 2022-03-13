#include <algorithm>
#include <iostream>
#include <numeric>
#include <set>
#include <string>
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
    int A, B;
    cin >> A >> B;
    if (A <= 8 && B <= 8) {
        cout << "Yay!" << endl;
    } else {
        cout << ":(" << endl;
    }
    return 0;
}
