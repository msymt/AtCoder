#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
int show(int n) {
    int sw = 0;
    while (n > 0) {
        sw += n % 10;
        n /= 10;
    }
    return sw;
}
int main() {
    int A, B, N;
    cin >> N >> A >> B;
    int sum = 0;
    for (int i = 1; i <= N; i++) {
        int sw = show(i);
        if (sw >= A && sw <= B)
            sum += i;
    }
    cout << sum << endl;
    return 0;
}
