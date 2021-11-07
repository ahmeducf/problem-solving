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

double d;

double BS ()
{
    double lo = 0, hi = 2;
    double mid;
    while (hi - lo > 1e-12){
        mid = lo + (hi - lo)/2;
        if (mid * (d-mid) > mid + (d-mid)){
            hi = mid;
        }
        else {
            lo = mid;
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
    int t; cin >> t;
    while (t--){
        cin >> d;
        if (d == 0.0){
            cout << "Y " << fixed << setprecision(9) << d << " " << d << endl;
            continue;
        }

        double b = BS();
        double a = d - b;
        if (d > 3)
            cout << "Y " << fixed << setprecision(9) << a << " " << b << endl;
        else
            cout << "N" << endl;

    }
    kill;
}