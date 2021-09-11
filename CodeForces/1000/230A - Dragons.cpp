/*
 * Directed by: Ahmed Salah
 * */
 
#include <bits/stdc++.h>
#define kill return 0;
#define space " "
#define endl '\n'
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef string str;
typedef vector<int> vi;
//#define STREAM_IO
 
map<int, int> mp;
int main(){
  IO
  int s, n; cin >> s >> n;
  int x, y;
  for (int i = 0; i < n; ++i) {
    cin >> x >> y;
    mp[x] += y;
  }
 
  for (auto &w : mp){
    if (w.first >= s){
      cout << "NO" << endl;
      kill
    } else{
      s += w.second;
    }
  }
  cout << "YES" << endl;
  kill
}