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

template <class T>
inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template <class T>
inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

const ll INF = 1LL << 60;

bool check_all_digit_is_one(int input) {
    if (input == 1111) return true;
    return false;
}

int main() {
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    int cnt = 0;
    if (check_all_digit_is_one(s1)) cnt++;
    if (check_all_digit_is_one(s2)) cnt++;
    if (check_all_digit_is_one(s3)) cnt++;
    if (check_all_digit_is_one(s4)) cnt++;
    cout << cnt << endl;
    return 0;
}
