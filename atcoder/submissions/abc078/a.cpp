#include <math.h>

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
int main() {
    string x;
    string y;
    cin >> x >> y;
    if (x > y)
        cout << ">" << endl;
    else if (x == y)
        cout << "=" << endl;
    else
        cout << "<" << endl;
    return 0;
}
