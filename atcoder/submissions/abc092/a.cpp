#include <algorithm>
#include <cstdio>
#include <iostream>
#include <set>
#include <string>
using namespace std;
int main() {
    int A, B, C, D;
    int total = 0;
    cin >> A >> B >> C >> D;
    if (A > B) {
        if (C > D)
            total = B + D;
        else
            total = B + C;
    } else {
        if (C > D)
            total = A + D;
        else
            total = A + C;
    }
    cout << total << endl;
    return 0;
}
