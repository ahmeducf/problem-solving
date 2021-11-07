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

const int N = 1e6;
int p, q, r, s, t, u;

double fun (double x){
    return p * exp(-x) + q * sin(x) + r * cos(x) + s * tan(x) + t * x * x + u;
}
double BS ()
{
    double lo = 0.0, hi = 1.0;
    double mid;
    while (hi - lo >= 1e-9){
        mid = lo + (hi - lo)/2.0;
        if (fun(mid) >= 0){
            lo = mid;
        }
        else {
            hi = mid;
        }
    }
    return mid;
}

int main () {
    IO;
#ifdef LOCAL_MACHINE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    //    freopen("input.in", "r", stdin);
    while (cin >> p >> q >> r >> s >> t >> u){
        double x = BS();
        if (abs(fun(x)) <= 1e-4){
            cout << fixed << setprecision(4) << x << endl;
        }
        else
            cout << "No solution" << endl;
    }
    kill;
}
