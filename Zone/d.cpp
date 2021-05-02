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
    string s,t;
    cin >> s;
    deque<char> deq;
    bool rev = false;
    // revによって先頭か末尾に追加
    for(char c : s) {
        if(c == 'R') rev = !rev;
        else if(rev) deq.push_front(c);
        else deq.push_back(c);
    }
    
    if(rev) reverse(deq.begin(), deq.end());
    // 先頭から１つずつ取り出して，連続するなら追加せず，削除．それ以外は末尾に追加
    for(char c: deq) {
        if(t.size() && t.back() == c) t.pop_back(); // 追加せず，末尾削除
        else t.push_back(c); //そのまま末尾追加
    }
    cout << t << endl;
    return 0;
}