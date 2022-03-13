#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <string>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    string s, t;
    cin >> s;
    deque<char> deq;
    bool rev = false;
    for (char c : s) {
        if (c == 'R')
            rev = !rev;
        else if (rev)
            deq.push_front(c);
        else
            deq.push_back(c);
    }
    if (rev) reverse(deq.begin(), deq.end());
    for (char c : deq) {
        if (t.size() && t.back() == c)
            t.pop_back();
        else
            t.push_back(c);
    }
    cout << t << endl;
    return 0;
}
