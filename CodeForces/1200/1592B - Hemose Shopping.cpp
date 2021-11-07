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
    while (t--) {
        int n, x; cin >> n >> x;
        int arr[n+1];
        for (int i = 1; i <= n; ++i) {
            cin >> arr[i];
        }
        int sorted[n+1];
        partial_sort_copy(arr+1, arr+n+1, sorted+1, sorted+n+1);
        for (int i = 1; i <= n; ++i) {
            if (arr[i] != sorted[i]){
                if(i + x > n && i - x < 1){
                    cout << "NO" << endl;
                    goto brk;
                }
            }
        }
        cout << "YES" << endl;
        brk:;
    }
}