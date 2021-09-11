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

ll sum1[100005]; ll sum2[100005];

ll RangeSum (int l, int r, ll sumArray[]){
    return sumArray[r] - sumArray[l-1];
}

int main () {
    IO;
    //    freopen("infile.txt", "r", stdin);
    //    freopen("outfile.txt", "w", stdout);
    auto start = std::chrono::high_resolution_clock::now();
    ///

    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    int q; cin >> q;

    vector<int>u(v.begin(), v.end());
    sort(u.begin(), u.end());


    memset(sum1, 0, sizeof(sum1));
    memset(sum2, 0, sizeof(sum2));
    for (int i = 1; i <= n; ++i) {
        sum1[i] = v[i-1] + sum1[i-1];

        sum2[i] = u[i-1] + sum2[i-1];
    }

    while (q--){
        int type, l, r;
        cin >>  type >> l >> r;

        if (type == 1){
            // ToDo: Range sum V
            cout << RangeSum(l, r, sum1) << endl;
        }
        else {
            // ToDo: Range sum U
            cout << RangeSum(l, r, sum2) << endl;
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