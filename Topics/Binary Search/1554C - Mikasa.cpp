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

ll n, m;

ll BS() {
    ll lo = 0, hi = 1e18;
    ll mid, ans;
    while (lo <= hi) {
        mid = lo + (hi - lo)/2;
        if ((n | mid) > m){
            hi = mid - 1;
            ans = (n | mid);
        }
        else {
            lo = mid + 1;
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
//    freopen("army.in", "r", stdin);
    int t; cin >> t;
    while (t--) {
        cin >> n >> m;
        cout << (n ^ BS()) << endl;
    }
    kill;
}