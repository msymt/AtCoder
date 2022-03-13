#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
int main() {
    int A, B, C;
    cin >> A;
    cin >> B;
    cin >> C;
    if ((A + B) - C >= 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
