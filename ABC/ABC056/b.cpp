#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <vector>
#include <numeric>
#include <map>
#include <queue>
#include <cmath>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for(int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int w, a, b;
    cin >> w >> a >> b;
    if(a - b > 0) swap(a, b);

    if(b <= a+w && a+w <= b+w) cout << "0" << endl;
    else cout << b - (a + w) << endl;
    return 0;
}