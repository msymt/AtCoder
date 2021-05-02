#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <numeric>
#include <cmath>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define FOR(i, k, n) for(int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;

int main(){
  int N, T, s1, s2, mint;
  T = 0;
  s1 = 0;
  s2 = 0;
  mint = INT_MAX;
  cin >> N;
  int W[N + 1];
  rep(i, N) cin >> W[i];
  for(int i = 0; i < N; i++) {
    for(int j = 0; j < N; j++) {
      if(T <= j) s1 += W[j];
      else s2 += W[j];
    }
    mint = min(mint, abs(s1 - s2));
    s1 = 0;
    s2 = 0;
    T++;
  }
  cout << mint << endl;
  return 0;
}