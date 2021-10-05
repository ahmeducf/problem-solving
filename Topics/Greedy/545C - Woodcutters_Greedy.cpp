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

vector<pair<int, int>> v;

int main () {
    IO;
    //    freopen("infile.txt", "r", stdin);
    //    freopen("outfile.txt", "w", stdout);
    auto start = std::chrono::high_resolution_clock::now();
    ///
    int n; cin >> n;
    int x, h;
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        cin >> x >> h;
        if (i == 0){
            ans++;
            v.push_back({x-h, x});
        }
        else if (i == n-1) {
            ans++;
            v.push_back({x, x+h});
        }
        else {
            v.push_back({x, h});
        }
    }

    for (int i = 1; i < n-1; ++i) {
        if (v[i].first - v[i].second > v[i-1].second){
            int tmp = v[i].first;
            v[i].first -= v[i].second;
            v[i].second = tmp;
            ans++;
        } else if (v[i].first + v[i].second < v[i+1].first){
            v[i].second += v[i].first;
            ans++;
        }
        else {
            v[i].second = v[i].first;
        }
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