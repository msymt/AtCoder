#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <string>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    vector<int> a(3, 0);
    rep(i, 3) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    if (a[0] + a[1] == a[2])
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
