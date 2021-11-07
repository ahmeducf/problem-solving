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
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    //    freopen("input.in", "r", stdin);
    int t; cin >> t;
    while (t--){
        int n, d; cin >> n >> d;
        if (d <= n){
            cout << "YES" << endl;
            continue;
        }
        for (int i = 0; i <= n; ++i) {
            int x = (i + (int)ceil((double)d/(i+1)));
            if (x <= n){
                cout << "YES" << endl;
                goto brk;
            }
        }
        cout << "NO" << endl;
        brk:;
    }

    kill;
}