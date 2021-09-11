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


int main () {
    IO;
    //    freopen("infile.txt", "r", stdin);
    //    freopen("outfile.txt", "w", stdout);
    auto start = std::chrono::high_resolution_clock::now();
    ///
    double vp, vd, t, f, c;
    cin >> vp >> vd >> t >> f >> c;

    if(vd < vp) {
        cout << 0 << endl;
        kill;
    }

    double pp = vp * t;
    double td;
    int ans = 0;
    while (pp < c){
        td = pp / (vd - vp); // time for the dragon to catch the princess.
        pp += (td * vp);    // the distance that the queen can reach before the dragon catch her.

        if (pp >= c) break;

        // if the princess didn't reach the castle before dragon reach her, update position
        // and increase the counter.
        pp += ((pp / vd) + f) * vp;
        ans++;
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