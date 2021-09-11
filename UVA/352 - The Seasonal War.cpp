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

int n;
char G[25][25];
int visited[25][25];

bool valid (int i, int j){
    return i >= 0 && j >= 0 && i < n && j < n;
}

int dx[8] = {0, 0, -1, 1, -1, -1, 1, 1};
int dy[8] = {1, -1, 0, 0, 1, -1, 1, -1};
void dfs (int i, int j){
    if (!valid(i, j) || G[i][j] != '1' || visited[i][j] == 1)
        return;

    visited[i][j] = 1;

    for (int k = 0; k < 8; ++k) {
        int r = i + dx[k];
        int c = j + dy[k];

        dfs(r, c);
    }
}

int main(){
    IO;
//    freopen("infile.txt", "r", stdin);
//    freopen("outfile.txt", "w", stdout);
    auto start = std::chrono::high_resolution_clock::now();
    ///
    int tc = 1;
    while (cin >> n){
        memset(visited, 0, sizeof(visited));
        for (int i = 0; i < n; ++i)
            cin >> G[i];

        int  ans = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (G[i][j] == '1' && visited[i][j] == 0){
                    dfs(i, j);
                    ans++;
                }
            }
        }

        printf("Image number %d contains %d war eagles.\n", tc++, ans);
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