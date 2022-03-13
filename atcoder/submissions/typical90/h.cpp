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

template <class T>
inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template <class T>
inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

const ll INF = 1LL << 60;
const int n_max = 100100;
int n, k, ans = 0;
ll a[n_max] = {0};
map<int, int> m_map;

int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int cnt = 0, search_idx = 1;
    for (int i = 1; i <= n; i++) {
        // 最後まで
        while (search_idx <= n) {
            // 新しい数，kに達した場合
            if (m_map[a[search_idx]] == 0 && cnt == k) break;
            // 新しい値
            if (m_map[a[search_idx]] == 0) cnt++;
            // 見た値を追加
            m_map[a[search_idx]]++;
            // 追加
            search_idx++;
        }
        // 通過区間分を減らす
        ans = max(ans, search_idx - i);
        if (m_map[a[i]] == 1) cnt--;
        m_map[a[i]] -= 1;
    }
    cout << ans << endl;
    return 0;
}
