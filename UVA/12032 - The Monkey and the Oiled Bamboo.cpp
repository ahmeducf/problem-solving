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

int n;
vector<int> v(100000);
bool can (int k) {
    for (int i = 1; i <= n; ++i) {
        if (v[i] - v[i-1] == k){
            k--;
        }
        else if (v[i] - v[i-1] > k)
            return false;
    }
    return true;
}

int main () {
    IO;
#ifdef LOCAL_MACHINE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    //    freopen("input.in", "r", stdin);
    int t; cin >> t;
    int tt = 1;
    while (t--){
        cin >> n;
        v[0] = 0;
        for (int i = 1; i <= n; ++i) {
            cin >> v[i];
        }
        int lo = 1, hi = 1e7, mid;
        int ans = 0;
        while (lo <= hi) {
            mid = (lo+hi)/2;
            bool flag = can(mid);
            if (flag){
                ans = mid;
                hi = mid - 1;
            }
            else {
                lo = mid + 1;
            }
        }
        printf("Case %d: %d\n", tt++, ans);
    }
    kill;
}
