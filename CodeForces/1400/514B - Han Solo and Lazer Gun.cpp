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
  //  freopen("input.in", "r", stdin);
    int n; cin >> n;
    int x0, y0; cin >> x0 >> y0;
    int arr[n][2];
    for (size_t i = 0; i < n; i++)
    {
      cin >> arr[i][0] >> arr[i][1];
    }

    bool k[1003];
    memset(k, 0, sizeof k);
    int ans = 0;

    for (size_t i = 0; i < n; i++)
    {
      if (k[i]) continue;
      ans++;
      int dx1 = arr[i][0] - x0;
      int dy1 = arr[i][1] - y0;

      for (size_t j = 0; j < n; j++)
      {
        int dx2 = arr[j][0] - x0;
        int dy2 = arr[j][1] - y0;
        if (dx1 * dy2 == dx2 * dy1) k[j] = 1;
      }
    }
    
    
    
    cout << ans << endl;
    kill;
}