#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
int main() {
    int A, B;
    int ans = 0;
    cin >> A;
    cin >> B;
    // int C = B - A;
    for (int i = A; i <= B; i++) {
        string S = to_string(i);
        if (S[0] == S[4] && S[1] == S[3]) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
