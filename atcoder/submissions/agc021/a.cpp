#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
int main() {
    string n;
    cin >> n;
    int N = 0;
    REP(i, n.size())
    N += (n[i] - '0');
    int M = ((int)n[0] - (int)'0' - 1) + ((n.size() - 1) * 9);
    cout << max(N, M) << endl;
    ;  //入力値か, 最大桁数を1減らしてからそれより一桁下全ての桁を9とした場合
    return 0;
}
