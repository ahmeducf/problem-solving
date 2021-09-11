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

bool compare (pair<int, double> x, pair<int, double> y){
    return x.second > y.second;
}

int main () {
    IO;
    //    freopen("infile.txt", "r", stdin);
    //    freopen("outfile.txt", "w", stdout);
    auto start = std::chrono::high_resolution_clock::now();
    ///
    double n, t1, t2, k; cin >> n >> t1 >> t2 >> k;
    k = 100 - k;
    vector<pair<int, double>> v;
    int a, b;
    double h;
    for (int i = 1; i <= n; ++i) {
        cin >> a >> b;
        h = (a * t1 * (k/100)) + (b * t2);
        h = max (h, (b * t1 * (k/100)) + (a * t2));
        v.push_back({i, h});
    }
    stable_sort(v.begin(), v.end(), compare);
    for (int i = 0; i < n; ++i)
        cout << v[i].first << " " << fixed << setprecision(2) << v[i].second << endl;

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