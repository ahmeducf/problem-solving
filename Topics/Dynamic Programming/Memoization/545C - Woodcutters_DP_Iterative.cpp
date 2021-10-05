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

struct pr{ int x; int h; };
vector<pr> v;
int n;
int memo[1000000][3];

int dp(int i, int state);



int main () {
    IO;
    //    freopen("infile.txt", "r", stdin);
    //    freopen("outfile.txt", "w", stdout);
    auto start = std::chrono::high_resolution_clock::now();
    ///
    cin >> n;
    for (int i = 0; i < n; ++i) {
        pr p;
        cin >> p.x >> p.h;
        v.push_back(p);
    }
    memo[0][0] = 0;
    memo[0][1] = 1;
    if (n > 1 && v[0].x + v[0].h < v[1].x) memo[0][2] = 1;

    for (int i = 1; i < n; ++i) {
        int x = v[i].x; int h = v[i].h;
        int xx = v[i-1].x; int hh = v[i-1].h;

        memo[i][0] = max(memo[i-1][0], max(memo[i-1][1], memo[i-1][2]));

        if  (x - h > xx){
            if (x - h > xx + hh)
                memo[i][1] = max(memo[i-1][0], max(memo[i-1][1], memo[i-1][2])) + 1;
            else
                memo[i][1] = max(memo[i-1][0], memo[i-1][1]) + 1;
        }

        if (i == n-1 || x + h < v[i+1].x)
            memo[i][2] =  max(memo[i-1][0], max(memo[i-1][1], memo[i-1][2])) + 1;
    }
    cout <<  max(memo[n-1][0], max(memo[n-1][1], memo[n-1][2])) << endl;

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