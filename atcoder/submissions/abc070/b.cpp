#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    int X[101] = {0};
    int cnt = 0;
    for (int i = A; i < B; i++) {
        X[i]++;
    }
    // for(int i = 0; i < 100; i++)
    //     cout << X[i] << " ";

    for (int i = C; i < D; i++) {
        X[i]++;
    }
    // cout << endl;
    // for(int i = 0; i < 100; i++)
    //    cout << X[i] << " ";

    for (int i = 0; i <= 100; i++) {
        if (X[i] == 2)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}
