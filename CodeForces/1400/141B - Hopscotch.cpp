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

int n, x, y;
bool valid(int x) { return x > (-(double)n/2) && x < ((double)n/2); }
int main () {
  IO;
  #ifdef LOCAL_MACHINE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
  #endif
  cin >> n >> x >> y;
  if (y % n == 0){
    cout << -1 << endl;
  }
  else {
    int box = (y / n) + 1;
    if (valid(x) && (box == 1 || box == 2))
      cout << box << endl;

    else if (!valid(x) && (box == 1 || box == 2))
      cout << -1 << endl;
      
    else {
      int numSqr = box + ((box / 2)-1);
      if (box % 2){
        if (x < 0 && x > -n)
          cout << numSqr << endl;
        else if (x > 0 && x < n)
          cout << numSqr+1 << endl;
        else
          cout << -1 << endl;
      }
      else {
        if (valid(x))
          cout << numSqr << endl;
        else
          cout << -1 << endl;
      }

    }
  }
  kill;
}