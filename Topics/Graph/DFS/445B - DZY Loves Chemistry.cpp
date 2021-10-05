/*
 * Directed by: Ahmed Salah
 * Problem link: https://codeforces.com/contest/445/problem/B
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

int n, m; 
int G[55][55];
int vis[55];
void dfs (int node){
	if (vis[node]) return;

	vis[node] = 1;

	for (size_t i = 1; i <= n; i++)
	{
		int child = G[node][i];
		if (!vis[i] && child){
			dfs(i);
		}
	}
}

int main () {
    IO;
    #ifdef LOCAL_MACHINE
    	freopen("in.txt", "r", stdin);
      freopen("out.txt", "w", stdout);
    #endif
		cin >> n >> m;
		int x, y;
		for (size_t i = 0; i < m; i++)
		{
			cin >> x >> y;
			G[x][y] = G[y][x] = 1;
		}

		int cnt = 0;
		for (size_t i = 1; i <= n; i++)
		{
			if (!vis[i]){
				dfs(i);
				cnt++;
			}
		}
		ll ans = pow(2, n-cnt);
		cout << ans << endl;
    kill;
}