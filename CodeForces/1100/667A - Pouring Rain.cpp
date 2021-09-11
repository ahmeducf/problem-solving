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
    double d, h, v, e;
    cin >> d >> h >> v >> e;
    double area = PI * d * d / 4.0;
    v = v * (1 / area);
    if (v <= e) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        cout << fixed << setprecision(12) << h / (v - e) << endl;
    }
    kill;
}