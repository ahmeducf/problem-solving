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

vector<set<int>> G(105);

int main () {
    IO;
    //    freopen("infile.txt", "r", stdin);
    //    freopen("outfile.txt", "w", stdout);
    auto start = std::chrono::high_resolution_clock::now();
    ///
    int n, m; cin >> n >> m;
    int a, b;
    for (int i = 0; i < m; ++i) {
        cin >> a >> b;
        G[a].insert(b);
        G[b].insert(a);
    }

    int ans = 0;
    while (true){
        vector<int> v;
        for (int i = 1; i <= n; ++i) {
            if (G[i].size() == 1){
                v.push_back(i);
            }
        }
        if (v.size())
            ans++;
        else
            break;

        for (int i = 0; i < v.size(); ++i) {
            auto it = G[v[i]].begin();
            G[*it].erase(v[i]);
            G[v[i]].clear();
        }
    }

    cout << ans << endl;

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