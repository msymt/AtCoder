#include <math.h>

#include <algorithm>
#include <climits>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <string>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rrep(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;
int main() {
    int A, B, C, D, E, F;
    cin >> A >> B >> C >> D >> E >> F;
    double ans = 0;
    int ansmas = 100 * min(A, B);
    int anssu = 0;
    rep(i, F + 1) {
        int water = 0;
        int sugar = 0;
        rep(j, F + 1) {
            water = 100 * (A * i + B * j);
            if (water == 0 || water > F) break;
            rep(k, F + 1) {
                rep(l, F + 1) {
                    sugar = C * k + D * l;
                    if (water + sugar <= F && (E * water / 100) >= sugar) {
                        if (ans < 100.0 * sugar / (water + sugar)) {
                            ans = 100.0 * sugar / (water + sugar);
                            ansmas = water + sugar;
                            anssu = sugar;
                        }
                    }
                }
            }
        }
    }
    cout << ansmas << " " << anssu << endl;
    return 0;
}
