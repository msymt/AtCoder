#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <vector>
#include <numeric>
#include <map>
#include <cmath>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for(int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<string> w;
    bool flag = false;
    rep(i, n) {
        string wi;
        cin >> wi;
        if(i > 0) {
            string wp = w[i - 1];
            if(wp[wp.length() - 1] != wi[0]) flag = true;
        }
        w.push_back(wi);
    }
    if(flag) {
        cout << "No" << endl;
        return 0;
    }
    int cnt = 0;
    rep(i, n) {
        rep(j, n) {
            if(i != j) {
                string wp = w[i];
                if(wp == w[j]) cnt++;
            }
        }
        if(cnt > 0) {
            cout << "No" << endl;
            return 0;
        }
        cnt = 0;
    }
    cout << "Yes" << endl;
    return 0;
}