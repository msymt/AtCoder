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
    int N;
    string name;
    cin >> N;
    if (N < 1000) {
        name = "ABC";
    } else {
        name = "ABD";
    }
    cout << name << endl;
    return 0;
}
