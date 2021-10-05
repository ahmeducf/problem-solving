/*
 * Directed by: Ahmed Salah
 * Problem link: https://codeforces.com/contest/584/problem/B
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
  #ifdef LOCAL_MACHINE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
  #endif
  int n; cin >> n;
  ll ans = (p0w(3, 3*n) - p0w(7, n));
  cout << (ans+MOD)%MOD << endl;
  kill;
}