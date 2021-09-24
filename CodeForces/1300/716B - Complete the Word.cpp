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
  set<char> alphas;
  for (size_t i = 0; i < 26; i++)
    alphas.insert(char('A' + i));
  
  set<char> rem;
  string s; cin >> s;
  bool flag = false;
  for (size_t i = 0; i < s.length(); i++)
  {
    int empty = 0;
    rem = alphas;
    for (size_t j = i; j < (i+26) && j < s.length(); j++)
    {
      if (s[j] == '?') empty++;
      else {
        rem.erase(s[j]);
      }
    }
    if (empty >= rem.size()){
      flag = true;
      for (size_t j = i; j <= (i+26) && !rem.empty(); j++)
      {
        if (s[j] == '?'){
          char ch = *(rem.begin());
          s[j] = ch;
          rem.erase(ch);
        }
      }
      break;
    }
  }
  if (flag){
    for (size_t i = 0; i < s.length(); i++)
    {
      if (s[i] == '?') s[i] = 'A';
      cout << s[i];
    }
    cout << endl;
  }
  else
    cout << -1 << endl;
  kill;
}