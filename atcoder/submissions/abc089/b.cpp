#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int n;
    char ch;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> ch;
        if (ch == 'Y') {
            cout << "Four"
                 << "\n";
            return 0;
        }
    }
    cout << "Three"
         << "\n";
}
