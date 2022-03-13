#include <algorithm>
#include <iostream>
#include <numeric>
#include <set>
#include <string>
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;
ll N;
int main() {
    cin >> N;
    ll L[100];
    L[0] = 2;
    L[1] = 1;
    for (int i = 2; i <= N; i++) {
        L[i] = L[i - 1] + L[i - 2];
    }
    cout << L[N] << endl;
    return 0;
}
