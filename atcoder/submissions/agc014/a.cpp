#include <algorithm>
#include <iostream>
#include <numeric>
#include <set>
#include <string>
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;
int main() {
    long A, B, C, cnt = 0;
    int tmp1 = 0, tmp2 = 0, tmp3 = 0;
    cin >> A >> B >> C;
    /*if(A == B && A == C && B == C){
        cout << -1 << endl;
        return 0;
    }*/
    for (int i = 0; i < 1e9; i++) {
        if (A % 2 == 0 && B % 2 == 0 && C % 2 == 0) {
            cnt++;
            A /= 2;
            B /= 2;
            C /= 2;
            tmp1 = B + C;
            tmp2 = C + A;
            tmp3 = A + B;
            A = tmp1;
            B = tmp2;
            C = tmp3;
            // cout << A << " " << B << " " << C << endl;
            // cout << cnt << endl;
        } else
            break;

        if (A == B && B == C && A == C) {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << cnt << endl;
    return 0;
}
