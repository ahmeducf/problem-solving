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

int n;
int arr[100000];
int BS (int target)
{
    int lo = 0, hi = n-1;
    int mid, ans = 0;
    while (lo <= hi){
        mid = lo + (hi - lo)/2;

        if (arr[mid] <= target){
            lo = mid+1;
            ans = lo;
        }
        else {
            hi = mid - 1;
        }
    }
    return ans;
}

int main () {
    IO;
    #ifdef LOCAL_MACHINE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    //    freopen("input.in", "r", stdin);
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr+n);

    int q; cin >> q;
    while (q--)
    {
        int x; cin >> x;
        cout << BS(x) << endl;
    }
    kill;
}
