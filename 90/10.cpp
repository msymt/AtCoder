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
    int N;
    cin >> N;
    vector<int> c1(N + 10),c2(N + 10);
    rep(i, N) {
        int c; cin >> c;
        int p; cin >> p;
        c1[i + 1] = c1[i];
        c2[i + 1] = c2[i];
        if(c == 1) c1[i + 1] += p;
        else c2[i + 1] += p;
    }
    int q; cin >> q;
    rep(i, q) {
        int l,r;
        cin >> l >> r;
        // r番目までの合計値 -　l番目より前の合計値
        cout << c1[r] - c1[l - 1] << " " << c2[r] - c2[l - 1] << endl;
    }
    return 0;
}