/*
 * Directed by: Ahmed Salah
 * Problem link: https://codeforces.com/contest/602/problem/B
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
    int n; cin >> n;
    map<int, int> mp;
    deque<int> dq;

    int x;
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        mp[x]++;
        dq.push_back(x);
        auto hi = mp.rbegin()->first;
        auto lo = mp.begin()->first;
        while (hi - lo > 1){
            mp[dq.front()]--;
            if (mp[dq.front()] == 0) mp.erase(dq.front());

            dq.pop_front();

            hi = mp.rbegin()->first;
            lo = mp.begin()->first;
        }
        ans = max(ans, (int)dq.size());
    }

    cout << ans << endl;
    kill;
}