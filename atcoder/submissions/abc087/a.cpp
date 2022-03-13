#include <iostream>
using namespace std;
int main() {
    int X, A, B;
    scanf("%d", &X);
    scanf("%d", &A);
    scanf("%d", &B);
    printf("%d", (X - A) % B);
    return 0;
}
