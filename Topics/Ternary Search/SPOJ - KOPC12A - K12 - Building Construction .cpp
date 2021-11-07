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

const int N = 1e5+5;
ll n, k;

int a[N], b[N];

ll pred (ll x) {
    ll sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += abs(a[i] - x) * b[i];
    }
    return sum;
}

ll TS ()
{
    ll lo = 0, hi = 1e5+5;
    ll mid1, mid2, ans = 0;
    while (lo <= hi){
        mid1 = lo + (hi - lo)/3;
        mid2 = hi - (hi - lo)/3;
        if (pred(mid1) >= pred(mid2)){
            lo = mid1 + 1;
            ans = pred(mid1);
        }
        else {
            hi = mid2 - 1;
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
    int t; cin >> t;
    while (t--){
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }
        cout << TS() << endl;
    }
    kill;
}