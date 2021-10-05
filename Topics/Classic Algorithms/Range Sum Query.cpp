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

ll sum[100005];

ll RSQ (int l, int r) {
    return sum[r] - sum[l-1];
}
int main () {
    IO;
#ifdef LOCAL_MACHINE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    //    freopen("input.in", "r", stdin);
    int n, q; cin >> n >> q;
    int x;
    for (int i = 1; i <= n; ++i) {
        cin >> x;
        sum[i] = sum[i-1] + x;
    }

    int l, r;
    while (q--){
        cin >> l >> r;
        cout << RSQ(l, r) << endl;
    }

}
