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

ll N;

bool can(ll mid){
    return mid * (mid+1) * (2*mid+1) / 6 <= N;
}

ll BS1()
{
    ll lo = 0, hi = 2e6+6;
    ll mid;
    while (lo <= hi){
        mid = lo + (hi - lo)/2;
        if (can(mid)){
            lo = mid + 1;
        }
        else {
            hi = mid - 1;
        }
    }
    return hi;
}

ll BS2(ll n, ll x)
{
    ll lo = 0, hi = 2*x+1, mid ,s;
    while(lo <= hi)
    {
        mid = lo + (hi - lo)/2;
        if(mid <= x)
            s = mid * (mid+1)/2;
        else
            s = x*x - (2*x-1-mid)*(2*x-mid)/2;

        if(s >= n)
            hi = mid-1;
        else
            lo = mid+1;
    }
    return lo;
}
int main () {
    IO;
#ifdef LOCAL_MACHINE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    freopen("army.in", "r", stdin);
    int t, tt = 0;
    cin >> t;
    while (t--) {
        cin >> N;
        ll x = BS1();

        N -= x * (x+1) * (2*x+1) / 6;

        ll y = BS2(N, x+1);

        printf("Case %d: %lld\n", ++tt, x*x + y);
    }
    kill;
}