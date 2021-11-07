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

unordered_map<string, string> buildMap(string s){
    replace_if(s.begin(), s.end(),
               [] (char c){return (c == ',' || c == ':' || c == '{' || c == '}');}, ' ');
    istringstream iss(s);
    string val, key;
    unordered_map<string, string> mp;
    if (s.find_first_not_of(" ") == string::npos)
        return mp;
    while (iss){
        iss >> val >> key;
        mp[val] = key;
    }
    return mp;
}


void print(const char c, set<string> set){
    cout << c;
    string s = *set.rbegin();
    set.erase(s);
    if (!set.empty()){
        for (auto &val : set){
            cout << val << ",";
        }
    }
    cout << s << endl;
}

int main(){
    IO;
    int n; cin >> n;
    while (n--){
        string s1, s2;
        cin >> s1 >> s2;
        unordered_map<string, string> oldDic = buildMap(s1);
        unordered_map<string, string> newDic = buildMap(s2);

        set<string> newKeys, removedKeys, changed;

        if (!newDic.empty()){
            for (const auto& ele : newDic){
                auto it = oldDic.find(ele.first);

                if (it != oldDic.end()){
                    if (it->second != ele.second)
                        changed.insert(ele.first);
                } else{
                    newKeys.insert(ele.first);
                }
            }
        }
        if (!oldDic.empty()){
            for (const auto& ele : oldDic){
                auto it = newDic.find(ele.first);

                if (it == newDic.end())
                    removedKeys.insert(ele.first);
            }
        }
        if (newKeys.empty() && removedKeys.empty() && changed.empty()){
            cout << "No changes" << endl << endl;
            continue;
        }
        if (!newKeys.empty())
            print('+', newKeys);
        if (!removedKeys.empty())
            print('-', removedKeys);
        if (!changed.empty())
            print('*', changed);
        cout << endl;

    }
    kill;
}