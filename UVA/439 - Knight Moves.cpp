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

bool validMove(int i, int j){
    return i >= 1 && i <= 8 && j >= 1 && j <= 8;
}


int dx[] = { 1, 1, -1, -1, 2, 2, -2, -2 };
int dy[] = { 2, -2, 2, -2, 1, -1, 1, -1 };
int BFSPath (int x1, int y1, int x2, int y2){
    queue<int> q;
    int len[9][9];
    memset(len, -1, sizeof(len));

    q.push(x1); q.push(y1);
    len[x1][y1] = 0;

    while (!q.empty()){
        int i = q.front(); q.pop();
        int j = q.front(); q.pop();
        if (i == x2 && j == y2){
            return len[i][j];
        }
        for (int k = 0; k < 8; ++k) {
            int nx = i+dx[k]; int ny = j+dy[k];
            if (validMove(nx, ny) && len[nx][ny] == -1){
                q.push(nx); q.push(ny);
                len[nx][ny] = len[i][j] + 1;
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
    string a, b;
    while (cin >> a >> b){
        int x1, y1;
        x1 = a[1] - '0';
        y1 = a[0] - 'a' + 1;
        int x2, y2;
        x2 = b[1] - '0';
        y2 = b[0] - 'a' + 1;

        int res = BFSPath(x1, y1, x2, y2);
        printf("To get from %s to %s takes %d knight moves.\n", a.c_str(), b.c_str(), res);
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