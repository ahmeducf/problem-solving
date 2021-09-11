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


bool compare1 (pair<int, int> pr1, pair<int, int> pr2) { return pr1.second < pr2.second; }
bool compare2 (pair<int, int> pr1, pair<int, int> pr2) { return pr1.first < pr2.first; }

int main () {
    IO;
    //    freopen("infile.txt", "r", stdin);
    //    freopen("outfile.txt", "w", stdout);
    auto start = std::chrono::high_resolution_clock::now();
    ///

    int n, f; cin >> n >> f;
    int arr[n];
    ll ans = 0;
    int k, l;
    for (int i = 0; i < n; i++) {
        cin >> k >> l;
        ans += min(k, l);
        arr[i] = min(k * 2, l) - min(k, l);
    }
    sort(arr, arr + n);
    int i = n-1;
    while (f && i >=0){
        ans += arr[i];
        i--;
        f--;
    }

    cout << ans << endl;

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