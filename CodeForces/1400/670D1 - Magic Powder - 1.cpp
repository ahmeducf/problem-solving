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

bool can (ll x) {
    ll kk = k;
    for (int i = 0; i < n; ++i) {
        if (a[i] * x < b[i]) {
            continue;
        } else {
            if (kk >= a[i] * x - b[i]) {
                kk -= a[i] * x - b[i];
            } else {
                return false;
            }
        }
    }
    return true;
}

ll BS ()
{
    ll lo = 0, hi = 2e9+9;
    ll mid, ans = 0;
    while (lo <= hi){
        mid = lo + (hi - lo + 1)/2;
        if (can(mid)){
            ans = mid;
            lo = mid + 1;
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
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }
    cout << BS() << endl;
    kill;
}