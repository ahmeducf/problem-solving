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

set<pair<int, int>> G;

bool validMove (int x, int y){ return x >= 1 && x <= 1000000000 && y >= 1 && y <= 1000000000; }

int dx[] = {1, -1, 0, 0, -1, -1, 1, 1};
int dy[] = {0, 0, 1, -1, -1, 1, -1, 1};
int BFSPath (int x1, int y1, int x2, int y2){
    queue<int> q;
    q.push(x1); q.push(y1);
    map<pair<int, int>, int> len;
    len[{x1, y1}] = 0;
    while (!q.empty()){
        int x = q.front(); q.pop();
        int y = q.front(); q.pop();
        if (x == x2 && y == y2) return len[{x, y}];

        for (int i = 0; i < 8; ++i) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            // visit only points that exist (and allowed) and not visited before
            if (validMove(nx, ny) && G.count({nx, ny}) != 0 && len.count({nx, ny}) == 0){
                q.push(nx); q.push(ny);
                len[{nx, ny}] = len[{x, y}] + 1;
            }
        }
    }
    return -1;
}
int main () {
    IO;
    //    freopen("infile.txt", "r", stdin);
    //    freopen("outfile.txt", "w", stdout);
    auto start = std::chrono::high_resolution_clock::now();
    ///

    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int n; cin >> n;
    int r, a, b;

    // ToDo: generate all graph allowed points
    while (n--){
        cin >> r >> a >> b;
        for (int i = a; i <= b; ++i) {
            G.insert({r, i});
        }
    }

    cout << BFSPath(x1, y1, x2, y2) << endl;


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