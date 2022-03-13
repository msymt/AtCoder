#include <algorithm>
#include <cstdio>
#include <iostream>
#include <set>
#include <string>
using namespace std;
int main() {
    int N, D, X;
    int total = 0;
    int tmp = 0;
    cin >> N >> D >> X;
    int A[100];
    for (int i = 0; i < N; i++)
        cin >> A[i];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= D; j++) {
            tmp = A[i] * j + 1;
            if (tmp <= D)
                total++;
        }
    }
    cout << total + X << endl;
    return 0;
}
