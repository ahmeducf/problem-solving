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



int main () {
    IO;
    //    freopen("infile.txt", "r", stdin);
    //    freopen("outfile.txt", "w", stdout);
    auto start = std::chrono::high_resolution_clock::now();
    ///
    int n, m, k, t;
    cin >> n >> m >> k >> t;

    int a, b;
    set<pair<int, int>>st;
    while (k--) {
        cin >> a >> b;
        st.insert({a, b});
    }

    // O(t*k)
    while (t--) {
        bool waste = false;
        cin >> a >> b;
        int w = 0;

        // O(k)
        for (auto val : st) {
            if (val.first < a)
                w++;
            if (val.first == a && val.second < b)
                w++;
            if (val.first == a && val.second == b){
                waste = true;
                break;
            }
        }

        if (waste)
            cout << "Waste" << endl;
        else{
            int p = ((a - 1) * m + b) - w;

            if (p % 3 == 0)
                cout << "Grapes" << endl;
            else if (p % 3 == 1)
                cout << "Carrots" << endl;
            else
                cout << "Kiwis" << endl;
        }
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