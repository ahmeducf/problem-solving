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

set<int> z;

vector<pair<int, int>> x;
int main () {
    IO;
    //    freopen("infile.txt", "r", stdin);
    //    freopen("outfile.txt", "w", stdout);
    auto start = std::chrono::high_resolution_clock::now();
    ///
    int p, q, l, r;
    cin >> p >> q >> l >> r;
    int a, b;
    while (p--){
        cin >> a >> b;
        for (int i = a; i <= b; ++i)
            z.insert(i);
    }
    int c, d;
    while (q--){
        cin >> c >> d;
        x.push_back({c, d});
    }
    int ans = 0;
    for (int i = l; i <= r; ++i) {
        for (int j = 0; j < x.size(); ++j) {
            int nc = x[j].first + i;
            int nd = x[j].second + i;

            auto it = z.lower_bound(nc);
            if (it == z.end()) continue;
            if (*it <= nd){
                ans++;
                break;
            }
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