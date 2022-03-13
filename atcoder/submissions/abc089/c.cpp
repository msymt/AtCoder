#include <iostream>
int main(void) {
    long N;
    long M[5] = {0, 0, 0, 0, 0};
    long ans = 0;
    char cap[] = {'M', 'A', 'R', 'C', 'H'};
    std::string buf;
    // stdin
    std::cin >> N;
    for (int i = 0; i < N; i++) {
        std::cin >> buf;
        for (int j = 0; j < 5; j++) {
            if (buf[0] == cap[j]) {
                M[j] += 1;
            }
        }
    }
    // calc
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            for (int k = j + 1; k < 5; k++) {
                ans += M[i] * M[j] * M[k];
            }
        }
    }
    // stdout
    std::cout << ans << std::endl;
    return 0;
}
