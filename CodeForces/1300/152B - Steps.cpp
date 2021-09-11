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

ll n, m;
pair<ll, ll> cur;
ll ans = 0;

bool validStep (ll x, ll y) { return x >= 1 && x <= n && y >= 1 && y <= m; }


int main () {
    IO;
    //    freopen("infile.txt", "r", stdin);
    //    freopen("outfile.txt", "w", stdout);
    auto start = std::chrono::high_resolution_clock::now();
    ///
    cin >> n >> m;
    cin >> cur.first >> cur.second;
    int k; cin >> k;
    ll x, y, lo, hi, mid, steps;
    for (int i = 0; i < k; ++i) {
        steps = 0;
        cin >> x >> y;
        lo = 0, hi = 1000000009;
        while (lo <= hi){
            mid = lo + (hi - lo) / 2;
            if (validStep(cur.first + (x * mid), cur.second + (y * mid))){
                steps = mid;
                lo = mid + 1;
            }
            else {
                hi = mid - 1;
            }
        }
        cur.first += (x * steps);
        cur.second += (y * steps);
        ans += steps;
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