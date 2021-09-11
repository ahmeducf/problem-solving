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
 
int main(){
    IO;
//    freopen("infile.txt", "r", stdin);
//    freopen("outfile.txt", "w", stdout);
    auto start = std::chrono::high_resolution_clock::now();
    ///
 
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int Xs[n], Ys[n];
        memset(Ys, 0, sizeof (Ys));
        for (int i = 0; i < n; ++i)
            cin >> Xs[i];
 
        for (int i = 1; i < n; ++i) {
            int prev = Xs[i-1] ^ Ys[i-1];
            int cur = Xs[i];
            int turnedOff = prev & ~cur;
            Ys[i] = turnedOff;
        }
 
        for (int i = 0; i < n; ++i)
            cout << Ys[i] << " ";
        cout << endl;
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