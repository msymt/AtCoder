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
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    vector<int> xp;
    vector<int> yp;
    rep(i, n) {
        int xi;
        cin >> xi;
        xp.push_back(xi);
    }
    rep(i, m) {
        int yi;
        cin >> yi;
        yp.push_back(yi);
    }
    
    int z = x + 1;
    sort(xp.begin(), xp.end());
    sort(yp.begin(), yp.end());
    int maxt = xp[xp.size() - 1];
    int mint = yp[0];
    for(int i = z; i < y + 1; i++) {
        if(maxt < i && i <= mint) {
            cout << "No War" << endl;
            return 0;
        }
    }
    cout << "War" << endl;
    return 0;
}