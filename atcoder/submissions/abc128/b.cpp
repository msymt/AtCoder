#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <string>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)

using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<pair<string, int> > v;
    vector<pair<string, int> > c;

    // second: -1 * value
    // for sort smaller at the same first value
    // i.e.
    // moscow 60
    // moscow 10
    // -> 10, 60
    rep(i, n) {
        string si;
        int pi;
        cin >> si >> pi;
        v.push_back(make_pair(si, -pi));
        c.push_back(make_pair(si, -pi));
    }

    sort(v.begin(), v.end());

    rep(i, n) {
        rep(j, n) {
            if ((v[i].first == c[j].first) && (v[i].second == c[j].second)) {
                cout << j + 1 << endl;
                c[j].first = "";
                c[j].second = 101;
                break;
            }
        }
    }

    return 0;
}
