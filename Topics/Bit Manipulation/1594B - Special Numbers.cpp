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


ll p0w (ll base, ll power) {
    ll ans = 1;
    while (power) {
        if (power & 1)
            ans = (base * ans) % MOD;
        base = (base * base) % MOD;
        power >>= 1;
    }
    return ans;
}
int main () {
    IO;
    int t; cin >> t;
    while (t--){
        ll ans = 0;
        int n, k; cin >> n >> k;
        int cnt = 0;
        while (k) {
            if (k & 1){
                ans = (p0w(n, cnt)+ans)% MOD;
            }
            cnt++;
            k >>= 1;
        }
        cout << ans << endl;
    }
    kill;
}