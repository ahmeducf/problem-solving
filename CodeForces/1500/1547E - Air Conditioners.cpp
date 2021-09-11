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
 
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        int indx[k];
        for (int i = 0; i < k; ++i)
            cin >> indx[i];
 
        int temp[k];
        for (int i = 0; i < k; ++i)
            cin >> temp[i];
 
 
        vector<ll> c (n+1, INT_MAX);
        for (int i = 0; i < k; ++i)
            c[indx[i]] = temp[i];
 
 
        vector<ll> L(n+1, INT_MAX);
        ll p = INT_MAX;
        for (int i = 1; i <= n; ++i) {
            p = min(p+1, c[i]);
 
            L[i] = p;
        }
 
        vector<ll> R(n+1, INT_MAX);
        p = INT_MAX;
        for (int i = n; i >= 0; --i) {
            p = min(p+1, c[i]);
 
            R[i] = p;
        }
 
        for (int i = 1; i <= n; ++i) {
            cout << min (L[i], R[i]) << " ";
        }
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