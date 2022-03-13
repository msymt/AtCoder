#include <cstdio>

int main() {
    int M;
    scanf("%d", &M);
    while (M <= 0 || M >= 24) {
        scanf("%d", &M);
    }
    printf("%d", 24 - M + 24);
}
