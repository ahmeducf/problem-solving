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

int n, m, cnt;
bool G[110][110];
bool visited[110];
bool color[110];

void dfs (int i, bool c){
    if (visited[i] == 1)
        return;

    visited[i] = 1;
    color[i] = c;

    for (int j = 1; j <= n; ++j) {
        if (G[i][j] == 1 && visited[j] == 0)
            dfs(j, !c);

        else if (G[i][j] == 1 && visited[j] == 1)
            if (color[i] == color[j])
                cnt++;
    }
}

int main () {
    IO;
//    freopen("infile.txt", "r", stdin);
//    freopen("outfile.txt", "w", stdout);
    auto start = std::chrono::high_resolution_clock::now();
    ///
    cin >> n >> m;
    int a, b;
    for (int i = 0; i < m; ++i) {
        cin >> a >> b;
        G[a][b] = G[b][a] = 1;
    }

    int toRemove = 0;
    for (int i = 1; i <= n; ++i) {
        cnt = 0;
        if (visited[i] == 0){
            dfs (i, 0);
            cnt /= 2;
            toRemove += cnt;
        }
    }

    if ((n - toRemove) % 2 == 1)
        toRemove++;

    cout << toRemove << endl;


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