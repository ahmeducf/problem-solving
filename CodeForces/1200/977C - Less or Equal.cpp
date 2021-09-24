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
    int i,k;
    int n;

    cin >> n >> k;

    ll arr[n];
    for(i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr+n);

    if(k == 0){
        if(arr[0] == 1)
            cout << -1 << endl;
        else
            cout << 1 << endl;

        kill;
    }

    if(n == 1)
    {
        cout << arr[0] << endl;
        kill;
    }

    if(n == k)
    {
        cout << arr[k-1] << endl;
        return 0;
    }

    k--;
    if(k+1 < n && arr[k] != arr[k + 1])
        cout << arr[k] << endl;
    else
        cout << -1 << endl;
    kill;
}