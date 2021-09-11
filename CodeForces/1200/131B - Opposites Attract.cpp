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
        freopen("../in.txt", "r", stdin);
        freopen("../out.txt", "w", stdout);
    #endif
    int n; cin >> n;
    map<int, ll> positive;
    map<int, ll> negative;
    int x;
    for (int i = 0; i < n; ++i) {
        cin >> x;

        if (x >= 0)
            positive[x] += 1;
        else
            negative[abs(x)] += 1;
    }
    ll cnt = 0;
    while (positive[0]--)
        cnt += positive[0];


    for (auto val : negative)
        cnt += val.second * (ll)positive[val.first];

    cout << cnt << endl;

    kill;
}