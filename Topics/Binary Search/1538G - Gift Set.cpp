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

ll x, y, a, b;

bool can(ll m) {
    if (a < b) {
        swap(a, b);
    }
    ll right = (ll)floorl((x - m * b) * 1.0l / (a - b));
    ll left = (ll)ceill((y - m * a) * 1.0l / (b - a));

    return max(left, 0ll) <= min(right, m);
}
ll BS() {
    if (a == b) {
        return min(x, y) / a;
    }
    ll lo = 0, hi = 1e9+9;
    ll mid, ans = 0;
    while (lo <= hi) {
        mid = lo + (hi - lo)/2;
        if (can(mid)){
            lo = mid + 1;
            ans = mid;
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
//    freopen("army.in", "r", stdin);
    int t; cin >> t;
    while (t--) {
        cin >> x >> y >> a >> b;
        cout << BS() << endl;
    }
    kill;
}