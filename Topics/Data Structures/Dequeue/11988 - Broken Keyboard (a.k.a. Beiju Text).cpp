/*
 * Directed by: Ahmed Salah
 * */


#include <bits/stdc++.h>
#define kill return 0
#define space " "
#define endl '\n'
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define STREAM_IO
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef string str;
typedef bitset<1000000010> bs;
typedef vector<int> vi;
typedef map<int, int> mii;

/// Bit_manipulation Operations
#define isOn(S, j) (S & (1 << j))
#define setBit(S, j) (S |= (1 << j))
#define clearBit(S, j) (S &= ~(1 << j))
#define toggleBit(S, j) (S ^= (1 << j))
#define lowBit(S) (S & (-S))
#define setAll(S, n) (S = (1 << n) - 1)

#define modulo(S, N) ((S) & (N - 1))         // returns S % N, where N is a power of 2
#define isPowerOfTwo(S) (!(S & (S - 1)))
#define nearestPowerOfTwo(S) ((int)pow(2.0, (int)((log((double)S) / log(2.0)) + 0.5)))
#define turnOffLastBit(S) ((S) & (S - 1))   // turn off last 1 bit from right
#define turnOnLastZero(S) ((S) | (S + 1))   //turn on last 0 bit from right
#define turnOffLastConsecutiveBits(S) ((S) & (S + 1))
#define turnOnLastConsecutiveZeroes(S) ((S) | (S - 1))

/*void printSet(int vS){             // in binary representation
    printf("S = %2d = ", vS);
    stack<int> st;
    while (vS)
        st.push(vS % 2), vS /= 2;
    while (!st.empty())             // to reverse the print order
        printf("%d", st.top()), st.pop();
    printf("\n");
}*/
//////////////////////////////////////////////////////////


int main(){
  IO;
  str s;
  while (cin >> s){
    deque<char> text;
    bool front = false;
    vector<char> v;
    for (int i = 0; i < s.length(); ++i) {
      if (s[i] == '['){
        front = true;
        if (!v.empty()){
          text.insert(text.begin(), v.begin(), v.end());
          v.clear();
        }
        continue;
      }
      if (s[i] == ']'){
        front = false;
        if (!v.empty()){
          text.insert(text.begin(), v.begin(), v.end());
          v.clear();
        }
        continue;
      }
      if (front)
        v.push_back(s[i]);
      else
        text.push_back(s[i]);

    }
    if (!v.empty())
      text.insert(text.begin(), v.begin(), v.end());

    for_each(text.begin(), text.end(),
             [](const char &ch){ printf("%c", ch);});
    printf("\n");
  }
  kill;
}
