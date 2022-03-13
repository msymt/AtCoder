#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
int main() {
    int N, cnt = 0;
    cin >> N;
    int d[100];
    int sum[101] = {0};
    for (int i = 0; i < N; i++) {
        cin >> d[i];
    }
    for (int i = 0; i < N; i++)
        sum[d[i]]++;

    for (int i = 0; i < 101; i++) {
        if (sum[i] >= 1)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}
