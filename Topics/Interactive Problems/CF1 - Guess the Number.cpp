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
int n;

void BS ()
{
    int lo = 1, hi = N;
    int mid;
    while (hi > lo){
        mid = lo + (hi - lo + 1)/2;
        cout << mid << '\n'; cout << flush;
        string s; cin >> s;
        if (s.empty()) break;
        if (s == "<"){
            hi = mid - 1;
        }
        else {
            lo = mid;
        }
    }
    cout << "! " << lo << '\n';
    cout << flush;
}

int main () {
    IO;
#ifdef LOCAL_MACHINE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    //    freopen("input.in", "r", stdin);
    BS();
    kill;
}