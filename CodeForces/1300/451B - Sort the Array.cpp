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

    int n; cin >> n;
    vector<int> v(n);
    bool flag = true;
    cin >> v[0];
    for (int i = 1; i < n; ++i) {
        cin >> v[i];
        if (v[i] < v[i-1]){
            flag = false;
        }
    }
    if (flag){
        cout << "yes" << endl;
        cout << 1 << " " << 1 << endl;
        kill;
    }

    int lo = 0, hi = lo;
    for (int i = 1; i < n; ++i) {
        if (v[i] < v[i-1]){
            hi++;
        }
        if (v[i] > v[i-1]){
            if (lo == hi){
                lo = hi = i;
            }
            else {
                break;
            }
        }
    }
    sort(v.begin()+lo, v.begin()+hi+1);

    for (int i = 1; i < n; ++i) {
        if (v[i] < v[i-1]){
            cout << "no" << endl;
            kill;
        }
    }

    cout << "yes" << endl;
    cout << lo+1 << " " << hi+1 << endl;

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