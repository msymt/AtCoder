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

int fac(int k){
    int sum = 1;
    for (int i = 1; i <= k; ++i)
    {
        sum *= i;
    }
    return sum;
}
int tyou(int k, int nh) {
    int bunsi = fac(k);
    int nh2 = nh * nh;
    double same = (bunsi / (fac(nh + 1) * fac(nh + 1)));
    if(nh > 1) {
        double odd = (nh2 - nh) * bunsi / (fac(k) * fac(k - 1));
        return same + odd;
    } else return same;
}

// int tyou2(int k, int nh) {
//     int bunsi = fac(k);
//     int nh2 = nh * nh;
//     double same = (bunsi / (fac(nh + 1) * fac(nh + 1)));
//     double same2 = (bunshi / fac(3)) * nh +
//     return same + odd;
// }

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int len = 4;
    int no, nx, nh;
    no = 0;nx = 0;nh = 0;
    string S;
    vector<int> p(10, 0);
    cin >> S;
    rep(i, S.size()) {
        if(S[i] == 'o') {
            no++;
            p[i] = 0;
        } else if(S[i] == 'x') {
            nx++;
            p[i] = 1;
        } else {
            nh++;
            p[i] = 2;
        }
    }
    if(no > 4) {
        cout << 0 << endl;
        return 0;
    }
    if(no == 4) {
        cout << fac(no) << endl;
        return 0;
    }
    if(no == 3) {
        int cno = fac(no) * no * (no + 1);
        int tyohuku = (int)(no * (double)(fac(len) / (len - no + 1)));
        cout << cno + tyohuku << endl;
        return 0;
    }
    if(no == 2) {
        int cno = fac(no) * no * (no + 1);
        int tyohuku = (int)(2 * (double)(fac(len) / (len - 1)) + (double)(fac(len) / (len - no + 1)));
        cout << cno + tyohuku << endl;
        return 0;
    }
    // if(no == 1) {
    //     int a4 = 1;
    //     int a3 = nh * (double)(fac(len) / fac(len - 1));
    //     int a2 = tyou(len, nh);
    //     int a1 = tyou2(len, nh);
    //     cout << a4 + a3 + a1 << endl;
    //     return 0;
    // }
    return 0;
}
