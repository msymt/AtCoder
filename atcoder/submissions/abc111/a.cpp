#include <algorithm>
#include <cmath>
#include <iostream>
#include <numeric>
#include <set>
#include <string>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
    int N, cnt = 0, ans = 0, tmp = 0;
    string n;
    cin >> n;
    rep(i, 3) {
        if (n[i] == '1')
            n[i] = '9';
        else if (n[i] == '9')
            n[i] = '1';
    }
    cout << n << endl;
    return 0;
}
