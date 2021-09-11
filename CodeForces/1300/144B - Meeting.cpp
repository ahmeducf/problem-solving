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

int dist (int xa, int ya, int xb, int yb){
    int x = (xa-xb) * (xa-xb);
    int y = (ya-yb) * (ya-yb);
    return ceil(sqrt(x + y));
}

int main () {
    IO;
    #ifdef LOCAL_MACHINE
    freopen("../in.txt", "r", stdin);
    freopen("../out.txt", "w", stdout);
    #endif
    //    freopen("input.in", "r", stdin);
    int xa, ya, xb, yb;
    cin >> xa >> ya >> xb >> yb;

    if (xa > xb) swap(xa, xb);
    if (ya > yb) swap(ya, yb);

    set<pair<int, int>> st;

    for (int i = xa; i <= xb; ++i)
        st.insert({i, ya});
    for (int i = xb; i >= xa; --i)
        st.insert({i, yb});

    for (int i = ya; i <= yb; ++i)
        st.insert({xa, i});

    for (int i = yb; i >= ya; --i)
        st.insert({xb, i});


    int n; cin >> n;
    set<pair<int, pair<int, int>>> rad;
    while (n--) {
        int x, y, r; cin >> x >> y >> r;
        rad.insert({r, {x, y}});
    }

    int cnt = 0;
    for (auto val : st) {
        int xi = val.first;
        int yi = val.second;
        for (auto rd : rad) {
            int r = rd.first;
            int x = rd.second.first;
            int y = rd.second.second;
            int d = dist(x, y, xi, yi);
            if (d <= r){
                cnt++;
                break;
            }
        }
    }

    cout << st.size() - cnt << endl;
    kill;
}