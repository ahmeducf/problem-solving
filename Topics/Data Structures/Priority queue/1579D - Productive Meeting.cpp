/*
 * Directed by: Ahmed Salah
 * https://codeforces.com/contest/1579/problem/D
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
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        priority_queue<pair<int, int>> pq;
        vector<pair<int, int>> v;
        int x;
        for (int i = 1; i <= n; ++i) {
            cin >> x;
            if (x) pq.push({x, i});
        }

        while (pq.size() > 1){
            auto p1 = pq.top();
            pq.pop();
            auto p2 = pq.top();
            pq.pop();
            v.push_back({p1.second, p2.second});

            p1.first--;
            p2.first--;
            if (p1.first) pq.push(p1);
            if (p2.first) pq.push(p2);
        }

        cout << v.size() << endl;
        for (int i = 0; i < v.size(); ++i) {
            cout << v[i].first << " " << v[i].second << endl;
        }
    }
    kill;
}