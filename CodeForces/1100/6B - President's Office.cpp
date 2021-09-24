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
char c;
char G[105][105];
bool visited[105][105];
set<char> st;

bool valid (int i, int j) {return i >= 0 && i < n && j >= 0 && j < m;}

void solve (int i, int j){
    if (!valid(i, j) || visited[i][j] || G[i][j] == '.')
        return;

    visited[i][j] = 1;
    if (G[i][j] != c && isalpha(G[i][j])){
        st.insert(G[i][j]);
        return;
    }

    solve(i, j+1);
    solve(i, j-1);
    solve(i-1, j);
    solve(i+1, j);
}

int main () {
    IO;
    //    freopen("infile.txt", "r", stdin);
    //    freopen("outfile.txt", "w", stdout);
    auto start = std::chrono::high_resolution_clock::now();
    ///

    cin >> n >> m;
    cin >> c;
    for (int i = 0; i < n; ++i) {
        cin >> G[i];
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (G[i][j] == c && !visited[i][j]){
                solve(i, j);
            }
        }
    }

    cout << st.size() << endl;

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