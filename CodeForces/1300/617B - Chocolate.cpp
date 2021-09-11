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
//    freopen("input.in", "r", stdin);
    int n; cin >> n;
    ll ans = 0;
    int a; vector<int> v;
    for (int i = 1; i <= n; ++i) {
        cin >> a;
        if (a == 1) v.push_back(i);
    }

    if (v.size() == 1)
        ans = 1;
    else if (v.size() > 1){
        int sep = v[1] - v[0];
        ans = sep;
        for (int i = 2; i < v.size(); ++i) {
            sep = v[i] - v[i-1];
            ans *= sep;
        }
    }

    cout << ans << endl;
    kill;
}