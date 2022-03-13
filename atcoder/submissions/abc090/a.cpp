#include <cstdio>
#include <iostream>
using namespace std;
int main() {
    string S, I, J;
    cin >> S;
    cin >> I;
    cin >> J;
    for (int i = 0; i < 3; ++i) {
        if (i == 0)
            cout << S[i];
        else if (i == 1)
            cout << I[i];
        else
            cout << J[i];
    }
    return 0;
}
