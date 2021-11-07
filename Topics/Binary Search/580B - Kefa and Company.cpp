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


int n, d;
struct frnd {
    int m;
    int s;
};
bool compare (frnd f1, frnd f2) { return f1.m < f2.m; }

int main () {
    IO;
#ifdef LOCAL_MACHINE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    //    freopen("input.in", "r", stdin);
    cin >> n >> d;
    vector<int> money(n);
    vector<frnd> v(n);
    vector<ll> cum(n+1);
    cum[0] = 0;
    int m, s;
    for (int i = 0; i < n; ++i) {
        cin >> m >> s;
        v[i] = {m, s};
        money[i] = m;
    }
    sort(v.begin(), v.end(), compare);
    sort(money.begin(), money.end());
    for (int i = 1; i <= n; ++i) {
        cum[i] = v[i-1].s + cum[i-1];
    }
    ll ans = INT32_MIN;

    for (int i = 0; i < n; ++i) {
        auto it = std::lower_bound(money.begin(), money.end(), money[i]+d);
        int p = (int)(it - money.begin());
        ll sum = cum[p] - cum[i];
        ans = max(ans, sum);
    }
    cout << ans << endl;
    kill;
}