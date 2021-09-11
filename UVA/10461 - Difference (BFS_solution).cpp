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

int v, e;
vector<vector<int>> G(505);
vector<vector<int>> DG(505);
int val[505];
bool visited[505];

int BFS_Min (int job){
    int total = 0;
    queue<int> q;
    bool visited1[505];
    memset(visited1, 0, sizeof visited1);
    q.push(job);
    visited1[job] = 1;

    while (!q.empty()){
        int u = q.front(); q.pop();
        for (auto v1 : G[u]) {
            if (!visited1[v1]){
                q.push(v1);
                visited1[v1] = 1;
                total += val[v1];
            }
        }
    }
    return total;
}

int BFS_Max (int job){
    int total = 0;
    queue<int> q;
    bool visited2[505];
    memset(visited2, 0, sizeof visited2);
    q.push(job);
    visited[job] = 1;
    visited2[job] = 1;

    while(!q.empty()){
        int u = q.front(); q.pop();
        for (auto v1 : DG[u]) {
            if (!visited2[v1]){
                q.push(v1);
                visited[v1] = visited2[v1] = 1;
            }
        }
    }
    for (int i = 1; i <= v; i++){
        if (!visited[i])
            total += val[i];
    }
    return total;
}
int main () {
    IO;
    //    freopen("infile.txt", "r", stdin);
    //    freopen("outfile.txt", "w", stdout);
    auto start = std::chrono::high_resolution_clock::now();
    ///
    int tc = 1;
    while (cin >> v >> e && v != 0){
        for (int i = 1; i <= v; i++)
            cin >> val[i];

        int j1, j2;
        while (e--){
            cin >> j1 >> j2;
            G[j1].push_back(j2);
            DG[j2].push_back(j1);
        }

        int q; cin >> q;
        int u;
        printf("Case #%d:\n", tc++);
        while (q--){
            cin >> u;
            memset(visited, 0, sizeof visited);
            int min = BFS_Min(u);
            int max = BFS_Max(u);

            printf("%d\n",abs(max-min));
        }
        printf("\n");
        for(int i = 0; i <= v; i++){
            G[i].clear();
            DG[i].clear();
        }
    }


    ///
    auto end = std::chrono::high_resolution_clock::now();
//    #define EXECUTION_TIME
    #ifdef EXECUTION_TIME
        std::cerr << "Execution time: "
        << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count()
        << " ms" << endl;
    #endif
kill;
}