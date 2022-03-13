#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;

int gcd(int n) {
    int cnt = 0;
    for (int i = 1; i < n + 1; i++) {
        if (n % 2 == 1 && n % i == 0) cnt++;
    }
    return cnt;
}

int main() {
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 1; i < n + 1; i++) {
        int cnt = gcd(i);
        if (cnt == 8) ans++;
    }
    cout << ans << endl;
}
