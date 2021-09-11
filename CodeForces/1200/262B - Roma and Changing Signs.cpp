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
    int n, k; cin >> n >> k;

    ll sum = 0;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (k) {
            if (arr[i] < 0) {
                arr[i] *= -1;
                k--;
            }
        }
        sum += arr[i];
    }
    sort(arr, arr+n);
    if (k > 0 && k % 2)
        sum -= (2 * arr[0]);

    cout << sum << endl;
    kill;
}