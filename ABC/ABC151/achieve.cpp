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
  int n, k, m;
  cin >> n >> k >> m;
  int sum = 0;
  rep(i, n - 1) {
    int ai;
    cin >> ai;
    sum += ai;
  }
  rep(i, k + 1) {
    double ave = (sum + i) / n;
    if(ave >= double(m)) {
      cout << i << endl;
      return 0;
    }
  }
  cout << "-1" << endl;

  return 0;
}