#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <vector>
#include <numeric>
#include <map>
#include <queue>
#include <cmath>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for(int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    string a,b,c;cin>>a>>b>>c;
    char t = 'a' - 'A';
    char A = a[0] - t;
    char B = b[0] - t;
    char C = c[0] - t;
    cout<<A<<B<<C<<endl;
    return 0;
}