#include <algorithm>
#include <cmath>
#include <iostream>
#include <numeric>
#include <set>
#include <string>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;

int count(int x, int cnt) {
    while (x != 0) {
        x /= 10;
        cnt++;
    }
    return cnt;
}
int main() {
    int N, cnt = 0, ans = 0;
    cin >> N;
    int M = N;
    cnt = count(N, cnt);
    rep(i, cnt) {
        ans += M % 10;
        M /= 10;
    }
    if (N % ans == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
