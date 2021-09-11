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

map<string, int> generate_indices(){
    queue<string> q;
    map<string, int> mp;
    for (char c = 'a'; c <= 'z'; c++)
        q.push(string(1, c));

    int cnt = 1;
    while (!q.empty()){
        string s = q.front();
        mp[s] = cnt;
        q.pop();
        cnt++;

        if (s.size() == 5) continue;
        for (char c = s[s.size()-1]+1; c <= 'z'; c++)
            q.push(s+c);
    }
    return mp;
}

int main(){
    IO;
    map<string, int> mp = generate_indices();

    string s;
    while (cin >> s){
        auto it = mp.find(s);
        if (it == mp.end())
            cout << 0 << endl;
        else
            cout << mp[s] << endl;
    }
    kill;
}