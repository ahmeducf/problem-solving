/*
 * Directed by: Ahmed Salah
 * */

#include <bits/stdc++.h>

#define kill return 0
#define space " "
#define MOD 1000000007
#define PI  3.14159265358979323846
#define endl '\n'
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std;
typedef long long ll;
typedef unsigned long long ull;


int main () {
    IO;
#ifdef LOCAL_MACHINE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    //    freopen("input.in", "r", stdin);
    int n, m; cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int x;
    for (int i = 0; i < m; ++i) {
        cin >> x;
        auto it = std::upper_bound(a.begin(), a.end(), x);
        if (it != a.end()){
            cout << (it - a.begin()) << " ";
        }
        else {
            cout << n << " ";
        }
    }
    cout << endl;
    kill;
}