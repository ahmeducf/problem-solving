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
        if (arr[mid] < target){
            lo = mid + 1;
            ans = arr[mid];
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
    vector<ll> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    ll sum = accumulate(v.begin(), v.end(), 0LL);
    int m;
    cin >> m;
    while (m--) {
        ll x, y;
        cin >> x >> y;
        ll res = x + y;
        auto it = lower_bound(v.begin(), v.end(), x);
        if (it != v.end())
            res = min(res, max(0LL, y - (sum - *it)));
        if (it != v.begin()) {
            it--;
            res = min(res, max(0LL, x - *it) + max(0LL, y - (sum - *it)));
        }
        cout << res << endl;
    }
    kill;
}