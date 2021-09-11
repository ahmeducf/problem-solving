/*
 * Directed by: Ahmed Salah
 * */

#include <bits/stdc++.h>
#define kill return 0
#define space " "
#define endl '\n'
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef bitset<1000000010> bs;
typedef vector<int> vi;
typedef map<int, int> mii;


int main(){
    IO;
    string line;
    while (getline(cin, line))
    {
        if(line == "0 Fuel consumption 0")break;

        double curr = 0.0, tank = 0.0;
        int dist = 0, consumption = 0, leak = 0;;
        do
        {
            istringstream iss(line);
            int n , c;
            string s, trash;

            iss >> n >> s;
            if(s == "Fuel" || s == "Gas") iss >> trash;
            iss >> c;

            curr += leak * (n-dist);
            curr += (consumption / 100.0) * (n - dist);
            tank = max(curr, tank);


            if ( s == "Goal") break;

            if ( s == "Fuel") consumption = c;
            else if ( s == "Leak") leak++;
            else if (s[0] == 'M') leak = 0;
            else if (s == "Gas") curr = 0.0;

            dist = n;

        } while(getline(cin, line));

        cout << fixed << setprecision(3) << tank << endl;
    }

    kill;
}

