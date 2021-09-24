/*
 * Directed by: Ahmed Salah
 * */

#include <bits/stdc++.h>

#define kill return 0
#define space " "
#define MOD 1000000007
#define PI  3.14159265358979323846
#define endl '\n'
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std;
typedef long long ll;
typedef unsigned long long ull;


int main () {
    IO;
#ifdef LOCAL_MACHINE
    freopen("../in.txt", "r", stdin);
    freopen("../out.txt", "w", stdout);
#endif
//    freopen("popcorn.in", "r", stdin);
    int t; cin >> t;
    int tc = 1;
    while (t--){
        int n; cin >> n;
        if (n == 2)
            cout << -1 << endl;
        else {

            int cur = 1;
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < n; ++j) {
                    cout << cur << " ";

                    cur += 2;

                    if (cur > n * n) cur = 2;
                }
                cout << endl;
            }
        }
    }
    kill;
}