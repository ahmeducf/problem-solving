/*
 * Directed by: Ahmed Salah
 * */
 
#include <bits/stdc++.h>
#define kill return 0
#define space " "
#define endl '\n'
#define PI  3.14159265358979323846
#define INF 0x3f3f3f
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
 
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef bitset<1000000010> bs;
typedef vector<int> vi;
typedef map<int, int> mii;
 
int main(){
    IO;
//    freopen("infile.txt", "r", stdin);
//    freopen("outfile.txt", "w", stdout);
    auto start = std::chrono::high_resolution_clock::now();
    ///
 
    int t; cin >> t;
    while (t--){
        int xa, ya;
        cin >> xa >> ya;
 
        int xb, yb;
        cin >> xb >> yb;
 
        int xf, yf;
        cin >> xf >> yf;
 
        int ans = abs(ya - yb) + abs(xa - xb);
 
        if (xf == xa && xf == xb && ((yf < yb && yf > ya) || (yf > yb && yf < ya)))
            ans += 2;
        else if (yf == ya && yf == yb && ((xf < xb && xf > xa) || (xf > xb && xf < xa)))
            ans += 2;
 
        cout << ans << endl;
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