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
    int n;
    cin >> n;
    vector<pair<int, string> > st;
    rep(i, n) {
        string si;
        int ti;
        cin >> si >> ti;
        st.push_back(make_pair(ti, si));
    }
    sort(st.begin(), st.end());
    cout << st[st.size() - 2].second << endl;
    return 0;
}
