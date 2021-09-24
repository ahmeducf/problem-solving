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
    freopen("../in.txt", "r", stdin);
    freopen("../out.txt", "w", stdout);
#endif
//    freopen("popcorn.in", "r", stdin);
    int t; cin >> t;
    int tc = 1;
    while (t--){
        int n; cin >> n;
        string s; cin >> s;
        vector<int> sheep;
        for (int i = 0; i < n; ++i) {
            if (s[i] == '*')
                sheep.push_back(i);
        }
        int sz = sheep.size();
        if (sz == 0) {
            cout << 0 << endl;
            continue;
        }

        for (int i = 0; i < sz; ++i)
            sheep[i] -= i;

        int med = sheep[sz / 2];

        ll ans = 0;
        for (auto sh : sheep)
            ans += abs(sh - med);

        cout << ans << endl;
    }
    kill;
}