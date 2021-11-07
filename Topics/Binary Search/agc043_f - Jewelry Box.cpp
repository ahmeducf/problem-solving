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

double x, y;

double calc(double h) {
    double hh = 2 * h;
    return (x - hh) * (y - hh) * h;
}

double BS()
{
    double lo = 0.0, hi = max(y, x)/2;
    double mid1, mid2, f1, f2;
    while (hi-lo > 1e-6){
        mid1 = lo + (hi - lo)/3;
        mid2 = hi - (hi - lo)/3;
        f1 = calc(mid1);
        f2 = calc(mid2);
        if (f1 <= f2){
            lo = mid1;
        }
        else {
            hi = mid2;
        }
    }
    return f1;
}

int main () {
    IO;
#ifdef LOCAL_MACHINE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    //    freopen("input.in", "r", stdin);
    int t; cin >> t;
    while (t--){
        cin >> x >> y;
        cout << fixed << setprecision(11) << BS() << endl;
    }
    kill;
}