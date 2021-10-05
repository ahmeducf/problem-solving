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
    int n, q; cin >> n >> q;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr+n);

    int x;
    while (q--){
        cin >> x;
        int lo = 0, hi = n-1;
        int mid;
        while (lo <= hi){
            mid = lo + (hi-lo)/2;
            if (arr[mid] == x){
                cout << "found" << endl;
                goto brk;
            }
            else if (arr[mid] > x){
                hi = mid-1;
            }
            else {
                lo = mid+1;
            }
        }

        cout << "not found" << endl;
        brk:;
    }
}
