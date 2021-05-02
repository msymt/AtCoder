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
  int a, b, k;
  cin >> a >> b >> k;
  int maxt = max(a, b);
  vector<int> d;
  for(int i = 1; i <= maxt; i++) {
    if((a % i == 0) && (b % i == 0)) {
      d.push_back(i);
    }
  }
  cout << d[d.size() - k] << endl;

  return 0;
}