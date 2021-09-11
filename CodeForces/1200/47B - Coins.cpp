/*
 * Directed by: Ahmed Salah
 * */

#include <bits/stdc++.h>
#define kill return 0
#define space " "
#define endl '\n'
#define PI  3.14159265358979323846
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef bitset<1000000010> bs;
typedef vector<int> vi;
typedef map<int, int> mii;

bool compare (pair<char, int> x, pair<char, int> y){
    return x.second > y.second;
}

int main () {
    IO;
//    freopen("infile.txt", "r", stdin);
//    freopen("outfile.txt", "w", stdout);
    auto start = std::chrono::high_resolution_clock::now();
    ///
    string s;
    map<char, int> mp;

    cin >> s;
    if (s[1] == '>') mp[s[0]]++;
    else mp[s[2]]++;

    cin >> s;
    if (s[1] == '>') mp[s[0]]++;
    else mp[s[2]]++;

    cin >> s;
    if (s[1] == '>') mp[s[0]]++;
    else mp[s[2]]++;

    if (mp['A'] == 1 && mp['B'] == 1 && mp['C'] == 1)
        cout << "Impossible" << endl;
    else {
        if (mp['A'] == 0) cout << "A";
        else if (mp['B'] == 0) cout << "B";
        else if (mp['C'] == 0) cout << "C";

        if (mp['A'] == 1) cout << "A";
        else if (mp['B'] == 1) cout << "B";
        else if (mp['C'] == 1) cout << "C";

        if (mp['A'] == 2) cout << "A";
        else if (mp['B'] == 2) cout << "B";
        else if (mp['C'] == 2) cout << "C";

        cout << endl;
    }




    ///
    auto end = std::chrono::high_resolution_clock::now();
//    #define EXECUTION_TIME
#ifdef EXECUTION_TIME
    std::cerr << "Execution time: "
                  << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count()
                  << " ms" << endl;
#endif
    kill;
}