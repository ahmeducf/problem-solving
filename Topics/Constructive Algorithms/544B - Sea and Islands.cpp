/*
 * Directed by: Ahmed Salah
 * Problem link: https://codeforces.com/contest/544/problem/B
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

int n, k;
int cnt = 0;
char G[105][105];

bool valid (int i, int j) { return i >= 0 && i < n && j >= 0 && j < n; }
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

void solve (int i, int j){
  if (cnt < k){
    G[i][j] = 'L';
    cnt++;
  }
  else {
    G[i][j] = 'S';
  }

  for (size_t k = 0; k < 4; k++)
  {
    int x = i + dx[k];
    int y = j + dy[k];
    if (valid(x, y) && (G[x][y] != 'L')){
      G[x][y] = 'S';
    }
  }
  
}
int main () {
  IO;
  #ifdef LOCAL_MACHINE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
  #endif
  cin >> n >> k;
  for (size_t i = 0; i < n; i++)
  {
    for (size_t j = 0; j < n; j++)
    {
      if (G[i][j] != 'L' && G[i][j] != 'S'){
        solve(i, j);
      }
    }
    
  }
  if (cnt < k){
    cout << "NO" << endl;
  }
  else {
    cout << "YES" << endl;
    for (size_t i = 0; i < n; i++)
    {
      for (size_t j = 0; j < n; j++)
      {
        cout << G[i][j];
      }
      cout << endl;
    }
    
  }
  
  kill;
}