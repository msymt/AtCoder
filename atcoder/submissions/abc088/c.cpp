#include <iostream>
using namespace std;
int main() {
    int c[3][3];
    int x[3];
    int y[3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &c[i][j]);
        }
    }
    x[0] = 0;
    for (int i = 0; i < 3; i++) {
        y[i] = c[0][i] - x[0];
    }
    for (int i = 0; i < 3; i++) {
        x[i] = c[i][0] - y[0];
    }
    bool good = true;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (x[i] + y[j] != c[i][j])
                good = false;
        }
    }
    if (good == true)
        printf("Yes");
    else
        printf("No");
    return 0;
}
