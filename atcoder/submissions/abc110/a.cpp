#include <algorithm>
#include <cmath>
#include <iostream>
#include <numeric>
#include <set>
#include <string>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
    int N, cnt = 0, ans = 0, tmp = 0;
    vector<int> nums(3);
    rep(i, 3) cin >> nums.at(i);
    sort(nums.begin(), nums.end());
    cout << nums.at(2) * 10 + nums.at(1) + nums.at(0) << endl;
    return 0;
}
