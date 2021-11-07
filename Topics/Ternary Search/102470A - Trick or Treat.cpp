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
int n; double x, y, minTime;
vector<pair<double, double>> v(N);

double dist (double xa, double ya, double xb, double yb){
    double x0 = (xa-xb) * (xa-xb);
    double y0 = (ya-yb) * (ya-yb);
    return x0 + y0;
}
double f(double xx) {
    double maxTime = 0;
    for (int i = 0; i < n; ++i) {
        maxTime = max(maxTime, dist(v[i].first, v[i].second, xx, 0));
    }
    return maxTime;
}

double TS ()
{
    double lo = -200000, hi = 200000;
    double mid1, mid2, f1, f2;
    while (fabs(hi-lo) > 1e-10){
        mid1 = lo + (hi - lo)/3.0;
        mid2 = hi - (hi - lo)/3.0;
        f1 = f(mid1);
        f2 = f(mid2);
        if (f1 >= f2){
            lo = mid1;
        }
        else {
            hi = mid2;
        }
    }
    minTime = f1;
    return mid1;
}


int main () {
    IO;
#ifdef LOCAL_MACHINE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    //    freopen("input.in", "r", stdin);
    while (scanf("%d", &n) && n) {
        for (int i = 0; i < n; ++i) {
            scanf("%lf %lf", &x, &y);
            v[i] = {x, y};
        }
        double pos = TS();
        printf("%.9lf %.9lf\n", pos, sqrt(minTime));
    }
    kill;
}