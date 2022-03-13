#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
int main() {
    int N, Y, cnt = 0;
    cin >> N >> Y;
    for (int x = 0; x <= N; x++) {
        for (int y = 0; y <= N; y++) {
            int z = N - x - y;
            int sum = 10000 * x + 5000 * y + 1000 * z;
            if (sum == Y && z >= 0) {
                cout << x << " " << y << " " << z << endl;
                return 0;
            }
        }
    }
    cout << -1 << " " << -1 << " " << -1 << endl;
    return 0;
}
