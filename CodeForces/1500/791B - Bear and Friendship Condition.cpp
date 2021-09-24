/*
 * Directed by: Ahmed Salah
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

ll n, m, c, nodes, edges;
bool vis[200000];
vector<vector<int>> G(200000);

void dfs (int node){
    if (vis[node]) return;

    vis[node] = true;
    nodes++;

    for (auto child : G[node]) {
        edges++;
        if (!vis[child])
            dfs(child);
    }
}
int main () {
    IO;
#ifdef LOCAL_MACHINE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    //    freopen("input.in", "r", stdin);
    cin >> n >> m;
    int x, y;
    while (m--){
        cin >> x >> y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
    for (int i = 1; i <= n; ++i) {
        if (!vis[i]){
            nodes = 0, edges = 0;
            dfs(i);
            c = nodes * (nodes-1) / 2;
            edges /= 2;
            if (c != edges){
                cout << "NO" << endl;
                kill;
            }
        }
    }
    cout << "YES" << endl;
    kill;
}