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

ull bigMod(ull b, ull p, ull m){
    if (p == 0) return 1;
    ull sq = bigMod(b, p / 2, m);
    sq = ((sq % m) * (sq % m)) % m;

    if (p % 2)
        sq = ((sq % m) * (b % m)) % m;

    return sq;
}
int main () {
    IO;
    //    freopen("infile.txt", "r", stdin);
    //    freopen("outfile.txt", "w", stdout);
    auto start = std::chrono::high_resolution_clock::now();
    ///

    ull b, p, m;
    while (cin >> b >> p >> m){
        ull res = bigMod(b, p, m);
        cout << res << endl;
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