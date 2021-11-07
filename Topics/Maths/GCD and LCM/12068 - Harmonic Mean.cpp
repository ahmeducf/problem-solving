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
    int t, tt = 0, N;
    cin >> t;
    while(t--) {
        cin >> N;
        ll arr[10], m = 0, n = 0, tmp = 1;
        for(int i = 0; i < N; i++){
            cin >> arr[i];
            tmp *= arr[i];
        }
        m = tmp * N;
        for(int i = 0; i < N; i++)
            n += tmp / arr[i];

        tmp = __gcd(m, n);
        m /= tmp;
        n /= tmp;
        printf("Case %d: %lld/%lld\n", ++tt, m, n);

    }
    kill;
}