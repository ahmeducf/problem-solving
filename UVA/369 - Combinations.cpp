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

// nCm(10, 10)
int nCm (int n, int m) {
    if (n == 0 || m == 0 || n == m) return 1;

    return nCm(n-1, m - 1) + nCm(n - 1, m);
}
int main () {
    IO;
    //    freopen("infile.txt", "r", stdin);
    //    freopen("outfile.txt", "w", stdout);
    auto start = std::chrono::high_resolution_clock::now();
    ///

    int n, m;
    ll memo[102][102];
    memset(memo, 0, sizeof(memo));
    memo[1][0] = 1;
    memo[1][1] = 1;

    // memoization
    for (int i = 2; i <= 100; i++) {
        memo[i][0] = 1;
        for (int j = 1; j <= i; j++) {
            memo[i][j] = memo[i - 1][j - 1] + memo[i - 1][j];
        }
    }

    while (cin >> n >> m && n != 0) {
        printf("%d things taken %d at a time is %lld exactly.\n", n, m, memo[n][m]);
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