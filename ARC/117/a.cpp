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
    int a, b; cin >> a >> b;
    vector<int> v(a+b);
    int sum = 0;
    if(a >= b) {
        rep(i, a) {
            v[i] = i+1;
            sum += v[i];
        }
        int idx = 0;
        for(int i = a; i < a + b - 1; i++) {
            v[i] = -(idx+1);
            sum += v[i];
            idx++;
        }
        v[a+b - 1] = -sum;
    } else {
        rep(i, b) {
            v[i] = -(i+1);
            sum += v[i];
        }
        int idx = 0;
        for(int i = b; i < a + b - 1; i++) {
            v[i] = idx+1;
            sum += v[i];
            idx++;
        }
        v[a+b - 1] = -sum;
    }
    rep(i, a+b) cout << v[i] << " ";
    cout << endl;
    return 0;
}
