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

const int N = 1e9+9;
int n, k;
vector<int> v;

bool can (int x) {
    int kk = k;
    for (int i = 0; i < n; ++i) {
        if (v[i] <= x) continue;
        kk -= (v[i]/x);
    }
    return kk >= 0;
}
int BS ()
{
    int lo = 1, hi = N;
    int mid, ans;
    while (lo < hi){
        mid = lo + (hi - lo)/2;
        if (can(mid)){
            hi = mid;
            ans = mid;
        }
        else {
            lo = mid + 1;
        }
    }
    return ans;
}


int main () {
    IO;
#ifdef LOCAL_MACHINE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    //    freopen("input.in", "r", stdin);
    cin >> n >> k;
    int x;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        v.push_back(x);
    }
    cout << BS() << endl;
    kill;
}
