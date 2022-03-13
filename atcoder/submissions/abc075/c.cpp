#include <math.h>

#include <algorithm>
#include <climits>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <string>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rrep(i, k, n) for (int i = (k); i < (int)(n); i++)
using namespace std;
using ll = long long;
int cnt = 0;
int N, M;
bool graph[60][60];
bool visited[60];
int a[50], b[50];
void dfs(int v) {       //頂点vを訪れる
    visited[v] = true;  //頂点v訪問済み
    rep(v2, N) {
        //頂点v2: 頂点vに隣接している　かつ　未訪問
        if (graph[v][v2] == false) continue;  //以下スキップ
        if (visited[v2] == true) continue;    //以下スキップ
        dfs(v2);
    }
}
void dfs2(int x) {
    if (visited[x]) return;
    visited[x] = true;
    rep(i, N) if (graph[x][i]) dfs2(i);
}

int main() {
    cin >> N >> M;
    rep(i, M) {
        cin >> a[i] >> b[i];
        a[i]--;
        b[i]--;
        graph[a[i]][b[i]] = graph[b[i]][a[i]] = true;
    }
    int ans = 0;
    rep(i, M) {
        graph[a[i]][b[i]] = graph[b[i]][a[i]] = false;
        rep(j, N) visited[j] = false;
        dfs(0);  //頂点0から辿る事が可能なところに印をつける
        bool bridge = false;
        rep(j, N) if (visited[j] == false) bridge = true;  //未訪問なら
        if (bridge) ans += 1;

        graph[a[i]][b[i]] = graph[b[i]][a[i]] = true;
    }
    cout << ans << endl;
    return 0;
}
