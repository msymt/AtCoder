#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <vector>
#include <numeric>
#include <map>
#include <cmath>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for(int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main() {
  int a,b;
  cin >> a >> b;
  if(a >= 13) cout << b << endl;
  else if(a >= 6) cout << b / 2 << endl;
  else cout << "0" << endl;
  return 0;
}