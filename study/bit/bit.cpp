#include <iostream>
#include <vector>
using namespace std;

// Type: int -> vector
// bit: 集合
// N: 何このものについて考えているか
vector<int> IntegerToVector(int bit, int N) {
  vector<int> S:
  for(int i = 0; i < N; i++) {
    if(bit & (1 << i)) S.push_back(i);
  }
  return S;
}

int main() {
  int N, W;
  cin >> N >> W;
  vector<int> a(N);
  for(int i = 0; i < N; i++) cin >> a[i];

  // bit全探索
  bool exist = false;
  for(int bit = 0; bit < (1<<N); ++bit) { 
    // どれを選ぶか
    vector<int> S = IntegerToVector(bit, N);
    // 部分集合に対する総和
    int sum = 0;
    for(int i : S) sum += a[i];
    // 判定
    if(sum == W) exist = true;
  }

  if(exist) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}