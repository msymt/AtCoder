#include <algorithm>
#include <iostream>
#include <numeric>
#include <set>
#include <string>
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;
int N, A, B;
int main() {
    cin >> N >> A >> B;
    int sum = N * A;
    int ss = min(sum, B);
    cout << ss << endl;
    return 0;
}
