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

const int N = 1e9+9;
ll n, a, r, m;
vector<int> v;

ll calc (ll x)
{
    ll p = 0, q = 0;
    for (int i = 0; i < n; ++i) {
        if (v[i] < x)
            p += (x - v[i]);
        if (v[i] > x)
            q += (v[i] - x);
    }
    ll minCost;
    if (p >= q) {
        minCost = q * m + (p-q) * a;
    }
    else {
        minCost = p * m + (q-p) * r;
    }
    return minCost;
}
ll TS ()
{
    ll lo = 0, hi = N;
    ll mid1, mid2, f1, f2;
    while (lo <= hi){
        mid1 = lo + (hi - lo)/3;
        mid2 = hi - (hi - lo)/3;
        f1 = calc(mid1);
        f2 = calc(mid2);
        if (f1 >= f2){
            lo = mid1 + 1;
        }
        else {
            hi = mid2 - 1;
        }
    }
    return f1;
}


int main () {
    IO;
#ifdef LOCAL_MACHINE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    //    freopen("input.in", "r", stdin);
    cin >> n >> a >> r >> m;
    m = min(m, a+r);
    int x;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        v.push_back(x);
    }
    cout << TS() << endl;
    kill;
}