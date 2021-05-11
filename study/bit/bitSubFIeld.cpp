#include <iostream>
#include <vector>
using namespace std;
/*
$./bitSubField
172: {2 3 5 7 }
168: {3 5 7 }
164: {2 5 7 }
160: {5 7 }
140: {2 3 7 }
136: {3 7 }
132: {2 7 }
128: {7 }
44: {2 3 5 }
40: {3 5 }
36: {2 5 }
32: {5 }
12: {2 3 }
8: {3 }
4: {2 }
0: {}
*/

int main() {
    int n = 10;
    // A = {2, 3, 5, 7};
    int A = (1 << 2) | (1 << 3) | (1 << 5) | (1 << 7);

    for(int bit = A; ;bit = (bit - 1) & A) {
        vector<int> S;
        for(int i = 0; i < n; i++) {
            // iがbitに入るかどうか
            if(bit & (1 << i)) {
                S.push_back(i);
            }
        }
        cout << bit << ": {";
        for(int i = 0; i < (int)S.size(); i++) {
            cout << S[i] << " ";
        }
        cout << "}" << endl;
        // 最後の0でbreak;
        if(!bit) break;
    }
}