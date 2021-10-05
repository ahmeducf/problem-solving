/*
 * Directed by: Ahmed Salah
 * Problem link: https://codeforces.com/contest/716/problem/B
 * */

#include <bits/stdc++.h>

#define kill return 0
#define space " "
#define MOD 1000000007
#define PI  3.14159265358979323846
#define endl '\n'
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std;
typedef long long ll;
typedef unsigned long long ull;

vector<vector<int>> G(200009);
int visited[200009];
int cnt = 0;
void dfs(int node)
{
    if (visited[node]) return;

    visited[node] = 1;

    for (auto child : G[node]) {
        dfs(child);
    }
}

int main () {
    IO;
#ifdef LOCAL_MACHINE
    freopen("../in.txt", "r", stdin);
    freopen("../out.txt", "w", stdout);
#endif
//    freopen("popcorn.in", "r", stdin);
    int n; cin >> n;
    int m; cin >> m;
    int x, y;
    for (int i = 0; i < m; ++i) {
        cin >> x >> y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
    for (int i = 1; i <= n; ++i) {
        if (G[i].size() != 2 && !visited[i]){
            dfs(i);
        }
    }

    for (int i = 1; i <= n; ++i) {
        if (!visited[i]){
            cnt++;
            dfs(i);
        }
    }
    cout << cnt << endl;
    kill;
}