/*
 * Directed by: Ahmed Salah
 * */

#include <bits/stdc++.h>
#define kill return 0
#define space " "
#define endl '\n'
#define PI  3.14159265358979323846
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)


using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef bitset<1000000010> bs;
typedef vector<int> vi;
typedef map<int, int> mii;


vector<int> G[505], DG[505];
int val[505], visited[505];

int DFS_Min(int job) {
    if(visited[job]) return 0;

    visited[job] = 1;

    int total = val[job];
    for(int i = 0; i < G[job].size(); i++)
        total += DFS_Min(G[job][i]);
    return total;
}

int DFS_Max(int v) {
    if(visited[v]) return 0;

    visited[v] = 1;

    int total = val[v];
    for(int i = 0; i < DG[v].size(); i++)
        total += DFS_Max(DG[v][i]);
    return total;
}

int main () {
    IO;
    //    freopen("infile.txt", "r", stdin);
    //    freopen("outfile.txt", "w", stdout);
    int tc = 1;
    int v, e, q;
    int i, x, y;
    while(cin >> v >> e && v) {
        int totW = 0;
        for(i = 1; i <= v; i++ ) {
            cin >> val[i];
            totW += val[i];
        }

        for(i = 0; i < e; i++) {
            cin >> x >> y;
            G[x].push_back(y);
            DG[y].push_back(x);
        }

        cin >> q;
        printf("Case #%d:\n", tc++);
        while(q--) {
            cin >> x;

            memset(visited , 0, sizeof(visited));
            int minD = DFS_Min(x);

            memset(visited, 0, sizeof(visited));
            int maxD = totW - DFS_Max(x) + val[x];

            printf("%d\n", maxD-minD);
        }
        printf("\n");

        for(i = 1; i <= v; i++){
            G[i].clear();
            DG[i].clear();
        }
    }

    return 0;
}