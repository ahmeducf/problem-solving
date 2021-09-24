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
  string s, t; cin >> s >> t;
  int sLength = s.length(), tLength = t.length();
  bool automat = 0, array = 0;
  multiset<int> sSt, tSt;
  for (size_t i = 0; i < sLength; i++)
    sSt.insert(s[i]);
  for (size_t i = 0; i < tLength; i++)
    tSt.insert(t[i]);

  for (size_t i = 0; i < tLength; i++)
  {
    if (tSt.count(t[i]) > sSt.count(t[i])){
      cout << "need tree" << endl;
      kill;
    }
  }
  
  
  int j = 0;
  if (sLength > tLength){
    automat = 1;
    for (size_t i = 0; i < sLength; i++)
    {
      if (s[i] == t[j]){
        j++;
      }
      if (j == tLength) break;
    }
    if (j < tLength) array = 1;
  }
  else {
    array = 1;
  }

  if (automat && array) cout << "both" << endl;
  else if (automat)   cout << "automaton" << endl;
  else if (array)     cout << "array" << endl;
  
  kill;
}