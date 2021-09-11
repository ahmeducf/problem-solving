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

bool hashPrimes[100 + 1];

ll divCount(int n){
    ll total = 1;
    for (int p = 2; p <= n; p++) {
        if (hashPrimes[p]) {
            int count = 0;
            if (n % p == 0) {
                while (n % p == 0) {
                    n = n / p;
                    count++;
                }
                total = total * (count + 1);
            }
        }
    }
    return total;
}

int main () {
    IO;
    #ifdef LOCAL_MACHINE
        freopen("../in.txt", "r", stdin);
        freopen("../out.txt", "w", stdout);
    #endif
//    freopen("input.in", "r", stdin);

    memset(hashPrimes, 1, sizeof(hashPrimes));
    for (int p = 2; p * p < 101; p++){
        if (hashPrimes[p]){
            for (int i = p * 2; i < 101; i += p)
                hashPrimes[i] = false;
        }
    }
    
    int a, b, c; cin >> a >> b >> c;
    ll ans = 0;
    for (int i = 1; i <= a; ++i) {
        for (int j = 1; j <= b; ++j) {
            for (int k = 1; k <= c; ++k) {
                ans += divCount(i * j * k);
            }
        }
    }

    cout << ans << endl;
    kill;
}