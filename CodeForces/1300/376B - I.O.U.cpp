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
//    freopen("input.in", "r", stdin);
    int n, m; cin >> n >> m;
    int arr[n+10];
    memset(arr, 0, sizeof arr);

    int a, b, c;
    for (int i = 0; i < m; ++i) {
        cin >> a >> b >> c;
        arr[a] += c;
        arr[b] -= c;
    }

    ll debt = 0;
    for (int i = 1; i <= n; ++i) {
        if (arr[i] > 0)
            debt += arr[i];
    }

    cout << debt << endl;
    kill;
}