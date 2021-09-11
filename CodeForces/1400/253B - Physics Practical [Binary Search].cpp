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
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n; cin >> n;
    int arr[n];
    for (size_t i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    sort(arr, arr+n);

    int ans = INT32_MAX;
    for (int i = 0; i < n; i++)
    {
      int x = upper_bound(arr, arr+n, arr[i]*2) - arr;
      ans = min(ans, i + (n-x));
    }
    
    
    cout << ans << endl;
    kill;
}