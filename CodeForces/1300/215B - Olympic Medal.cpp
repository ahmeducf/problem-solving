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
    int n; cin >> n;
    int r1 = INT32_MIN;
    int x;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        r1 = max(r1, x);
    }

    int m; cin >> m;
    int p1 = INT32_MIN;
    for (int i = 0; i < m; ++i) {
        cin >> x;
        p1 = max(p1, x);
    }

    int k; cin >> k;
    int p2 = INT32_MAX;
    for (int i = 0; i < k; ++i) {
        cin >> x;
        p2 = min(p2, x);
    }
    int A, B; cin >> A >> B;

    double res = (double)(r1) * (sqrt((double)(B * p1) / (double)(B * p1 + A * p2)));

    cout << fixed << setprecision(12) << res << endl;


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