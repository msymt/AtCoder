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

template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

const ll INF = 1LL << 60;

const int third = 100000;
const int second = 200000;
const int first = 300000;
const int dual_1st = 400000;

void calc_money(int rank, int *sum_m) {
    switch(rank){
        case 1:
            *sum_m += first;
            break;
        case 2:
            *sum_m += second;
            break;
        case 3:
            *sum_m += third;
            break;
        default:
            break;
    }
}


int main() {
    int x, y; cin >> x >> y;
    int *sum_m;
    int ans = 0;
    sum_m = &ans;
    calc_money(x, sum_m);
    calc_money(y, sum_m);
    if(x == 1 and y == 1) *sum_m += dual_1st;
    cout << *sum_m << endl;
    return 0;
}
