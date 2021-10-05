/*
 * Directed by: Ahmed Salah
 * Problem link: https://codeforces.com/contest/550/problem/B
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
    int n, l, r, x;
    cin >> n >> l >> r >> x;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    sort(arr, arr+n);
    int ans = 0;
    int len = (1 << n);
    for (int i = 0; i < len; ++i) {
        ll tot = 0;
        int mn = INT32_MAX, mx = INT32_MIN, cnt = 0;
        for (int j = 0; j < n; ++j) {
            if (i & (1 << j)){
                tot += arr[j];
                mn = min(mn, j);
                mx = max(mx, j);
                cnt++;
            }
        }
        if (cnt >= 2 && tot >= l && tot <= r && arr[mx]-arr[mn] >= x) {
            ans++;
        }
    }

    cout << ans << endl;
    kill;
}