#include <math.h>
#include <memory.h>

#include <algorithm>
#include <climits>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <string>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rrep(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;
int N, M;
ll cnt = 0LL;
int ans = 0;
int tmp;
int main() {
    string S;
    cin >> S;
    cnt += 2 * (S.size() - 1);  //
    for (int i = 1; i < S.size() - 1; i++) {
        if (S[i] == 'U')
            cnt += S.size() - (i + 1) + i * 2;
        else
            cnt += i + 2 * (S.size() - i - 1);
    }
    cout << cnt << endl;
    return 0;
}
