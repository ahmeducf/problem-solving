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
    int positive = 0, negative = 0, n = 0;
    double ans = 0.0;
    string s1, s2; cin >> s1 >> s2;
    for (int i = 0; i < s1.length(); ++i) {
        if (s1[i] == '+')
            positive++;
        else
            negative++;
    }
    for (int i = 0; i < s2.length(); ++i) {
        if (s2[i] == '+')
            positive--;
        else if (s2[i] == '-')
            negative--;
        else
            n++;
    }
    if (!positive && !negative){
        cout << fixed << setprecision(9) << 1.0 << endl;
        kill;
    }
    double m = 1.0;
    if (n){
        m = pow(2, n); // number of possibilities
        for (int i = 0; i < m; ++i) {
            int on = 0, off = 0;
            // iterate over all bits of i
            for (int j = 0; j < n; ++j) {
                // isOn(i, j) => is bit j in number i ON?
                if (i & (1 << j))
                    on++;
                else
                    off++;
            }
            if (on == positive && off == negative)
                ans++;
        }
    }

    cout << fixed << setprecision(9) << ans / m << endl;

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