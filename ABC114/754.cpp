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
  string s;
  cin >> s;
  vector<int> v;
  int mint = 10000;

  for(int i = 0; i < s.length() - 2; i++) {
    string x = s.substr(i, 3);
    v.push_back(stoi(x));
  }
  for(int i = 0; i < v.size(); i++) {
    mint = min(mint, abs(v[i] - 753));
  }

  cout << mint << endl;

  return 0;
}