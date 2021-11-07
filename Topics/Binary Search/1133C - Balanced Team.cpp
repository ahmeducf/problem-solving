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


int main () {
    IO;
#ifdef LOCAL_MACHINE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    //    freopen("input.in", "r", stdin);
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int ans = INT32_MIN;
    for (int i = 0; i < n; ++i) {
        auto it = std::upper_bound(v.begin(), v.end(), v[i]+5);
        if (it != v.end()){
            int p = (int)(it-v.begin()-i);
            ans = max(ans, p);
        }
        else {
            ans = max(ans, (int)(n - i));
        }
    }
    cout << ans << endl;
    kill;
}