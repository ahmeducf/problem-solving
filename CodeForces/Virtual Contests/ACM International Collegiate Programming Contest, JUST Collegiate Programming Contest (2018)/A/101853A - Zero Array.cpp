/*
 * Directed by: UltraPlus {Ahmed Salah, Eslam Walid, Ahmed Hossam}
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

//ifstream in(R"(C:\Users\SALAH\CLionProjects\C\infile.txt)");
//ofstream out(R"(C:\Users\SALAH\CLionProjects\C\outfile.txt)");

int main(){
    IO;
    int t; cin >> t;
    while (t--) {
        int n, q; cin >> n >> q;
        int arr[n];
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] != 0)
                m[arr[i]]++;
        }

        int command, pos, val;
        for (int i = 0; i < q; i++) {
            cin >> command;
            if (command == 1) {
                cin >> pos >> val;
                int x = arr[pos - 1];
                if (x != 0){
                    m[x]--;
                }
                if (m[x] == 0)
                    m.erase(x);
                arr[pos - 1] = val;
                if (val != 0)
                    m[val]++;
            }
            else
            {
                cout << m.size() << endl;
            }
        }
    }
    kill;
}