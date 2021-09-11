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

    int n, l; cin >> n >> l;
    set<int> st;
    int x; double ans = 0.0;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        st.insert(x);
    }

    if (*st.begin() != 0){
        ans += *st.begin();
    }
    if (*st.rbegin() != l){
        ans = max(ans, (double)l - (double)*st.rbegin());
    }

    vector<double> v(st.begin(), st.end());
    for (int i = 1; i < v.size(); ++i) {
        ans = max(ans, (v[i] - v[i-1])/2);
    }

    cout << fixed << setprecision(9) << ans << endl;

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