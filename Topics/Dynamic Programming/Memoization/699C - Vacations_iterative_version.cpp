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

int n;
vector<int> v(105);
int memo[105][3];

int countDaysOfRest (int i, int a);
int main () {
    IO;
    //    freopen("infile.txt", "r", stdin);
    //    freopen("outfile.txt", "w", stdout);
    auto start = std::chrono::high_resolution_clock::now();
    ///
    cin >> n;
    for (int i = 0; i <= n; ++i)
        memo[i][0] = memo[i][1] = memo[i][2] = 1000;
    
    for (int i = 1; i <= n; ++i)
        cin >> v[i];

    memo[1][0] = 1;
    if (v[1] == 1 || v[1] == 3)
        memo[1][1] = 0;
    if (v[1] == 2 || v[1] == 3)
        memo[1][2] = 0;

    for (int i = 2; i <= n; ++i) {
        memo[i][0] = 1 + min(min(memo[i-1][0], memo[i-1][1]), memo[i-1][2]);

        if (v[i] == 1 || v[i] == 3)
            memo[i][1] = min(memo[i-1][0], memo[i-1][2]);

        if (v[i] == 2 || v[i] == 3)
            memo[i][2] = min(memo[i-1][0], memo[i-1][1]);
    }

    cout << min(min(memo[n][0], memo[n][1]), memo[n][2]) << endl;

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