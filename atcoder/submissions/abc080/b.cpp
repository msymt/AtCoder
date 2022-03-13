#include <algorithm>
#include <iostream>
#include <numeric>
#include <set>
#include <string>
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;
int N;
int main() {
    int n;
    cin >> N;
    n = N;
    int sum = 0;
    while (N > 0) {
        sum += N % 10;
        N /= 10;
    }
    if (n % sum == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
