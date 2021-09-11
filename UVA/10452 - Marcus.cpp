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
char G[9][9];
string letters = "IEHOVA#";

bool valid (int r, int c){
    if (!(r >= 0 && c >= 0 && r < n && c < m)){
        return false;
    } else {
        if (G[r][c] == letters[0]){
            letters.erase(letters.begin());
            return true;
        }
    }

    return false;
}

vector<string> ans;
void dfs (int r, int c){
    if (G[r][c] == '#')
        return;

    if (valid(r, c+1)){
        ans.push_back("right");
        dfs(r, c+1);
    }
    if (valid(r, c-1)){
        ans.push_back("left");
        dfs(r, c-1);
    }
    if (valid(r-1, c)){
        ans.push_back("forth");
        dfs(r-1, c);
    }
}
int main(){
    IO;
//    freopen("infile.txt", "r", stdin);
//    freopen("outfile.txt", "w", stdout);
    auto start = std::chrono::high_resolution_clock::now();
    ///
    int tc;
    cin >> tc;
    while (tc--){
        cin >> n >> m;
        for (int i = 0; i < n; ++i)
            cin >> G[i];
        
        int r = n-1;
        for (int i = 0; i < m; ++i) {
            if (G[r][i] == '@'){
                int c = i;
                dfs (r, c);
                break;
            }
        }
        cout << ans[0];
        for (int i = 1; i < ans.size(); ++i)
            cout << " " << ans[i];
        cout << endl;

        ans.clear();
        letters = "IEHOVA#";
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