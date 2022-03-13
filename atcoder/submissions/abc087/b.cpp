#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
int main() {
    int A, B, C, X;
    int cnt = 0;
    cin >> A >> B >> C >> X;
    for (int i = 0; i <= A; i++) {
        for (int j = 0; j <= B; j++) {
            for (int k = 0; k <= C; k++) {
                int sum = 500 * i + 100 * j + 50 * k;
                if (X == sum)
                    cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
