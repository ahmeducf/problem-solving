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
    int arr[n];
    map<int, pair<int, int>> mp;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        mp[arr[i]] = {i+1, n-i};
    }
    int m; cin >> m;
    ll cnt1 = 0, cnt2 = 0;
    while (m--){
        int q; cin >> q;
        cnt1 += mp[q].first;
        cnt2 += mp[q].second;
    }
    cout << cnt1 << " " << cnt2 << endl;

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