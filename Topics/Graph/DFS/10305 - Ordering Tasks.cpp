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

int n, m;
vector<vector<int>> G(110);
bool visited[110];

vector<int> tasks;

void dfs (int i){
    if (visited[i])
        return;

    visited[i] = 1;

    for (int j = 0; j < G[i].size(); ++j) {
        int child = G[i][j];
        if (visited[child] == 0)
            dfs(child);
    }

    tasks.insert(tasks.begin(), i+1);
}

int main () {
    IO;
//    freopen("infile.txt", "r", stdin);
//    freopen("outfile.txt", "w", stdout);
    auto start = std::chrono::high_resolution_clock::now();
    ///

    while (cin >> n >> m && n != 0) {
        memset(visited, 0, sizeof(visited));
        G = vector<vector<int>> (110);
        tasks.clear();


        int x, y;
        for (int i = 0; i < m; ++i) {
            cin >> x >> y;
            G[x-1].push_back(y-1);
        }

        for (int i = 0; i < n; ++i) {
            if (visited[i] == 0)
                dfs(i);
        }

        cout << tasks[0];
        for (int i = 1; i < tasks.size(); ++i)
            cout << " " << tasks[i];
        cout << endl;
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