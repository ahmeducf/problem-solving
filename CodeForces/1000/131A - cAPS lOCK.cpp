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
        freopen("../in.txt", "r", stdin);
        freopen("../out.txt", "w", stdout);
    #endif
    string s; cin >> s;
    string t = s;
    if (islower(s[0])){
        s[0] = toupper(s[0]);
        for (int i = 1; i < s.length(); ++i) {
            if (isupper(s[i])){
                s[i] = tolower(s[i]);
            }
            else {
                cout << t << endl;
                kill;
            }
        }
    }
    else {
        s[0] = tolower(s[0]);
        for (int i = 1; i < s.length(); ++i) {
            if (isupper(s[i])){
                s[i] = tolower(s[i]);
            }
            else {
                cout << t << endl;
                kill;
            }
        }
    }
    cout << s << endl;
    kill;
}