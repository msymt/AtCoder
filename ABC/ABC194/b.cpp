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

template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

const ll INF = 1LL << 60;
// ←↓→↑
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

int n;
int a[1100];
int b[1100];
int main() {
    cin.tie(0);ios_base::sync_with_stdio(0);
    cin >> n;
    rep(i, n) cin >> a[i] >> b[i];
    int res = INT_MAX - 1;
	for (int i = 0; i < n; i++) for (int j = 0; j < n; j++)
		res = min(res, i == j ? a[i] + b[j] : max(a[i], b[j]));
	printf("%d\n", res);
    return 0;
}
