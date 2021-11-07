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

string t, p;
int arr[200005];

bool can(int x)
{
    string tt = t, pp = p;
    int n = (int)tt.length();
    int m = (int)pp.length();
    for (int i = 0; i < x; ++i) {
        tt[arr[i]-1] = ' ';
    }
    for (int i = 0, j = 0; i < n; ++i) {
        if (tt[i] == pp[j]){
            j++;
        }
        if (j == m)
            return true;
    }
    return false;
}
int BS()
{
    int lo = 0, hi = 2e5+5;
    int mid, ans;
    while (lo <= hi){
        mid = lo + (hi - lo + 1)/2;
        if (can(mid)){
            lo = mid + 1;
            ans = mid;
        }
        else {
            hi = mid - 1;
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
    cin >> t >> p;
    int n = (int)t.length();
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cout << BS() << endl;
    kill;
}