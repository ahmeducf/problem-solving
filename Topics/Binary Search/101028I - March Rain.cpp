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

int n, k;
set<int> st;

bool can(int x) {
    int kk = 1;
    int h, start;

    set<int> q = st;
    start = *q.begin();
    q.erase(q.begin());
    while (!q.empty()) {
        h = *q.begin();
        if (h > (start + x-1)) {
            kk++;
            start = h;
            q.erase(q.begin());
        }
        else {
            q.erase(h);
        }
    }
    if (kk > k) return false;
    return true;
}

int BS() {
    int lo = 0, hi = 1e9+9;
    int mid, ans;
    while (lo <= hi) {
        mid = lo + (hi - lo + 1)/2;
        if (can(mid)) {
            hi = mid - 1;
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
    int t; cin >> t;
    while (t--) {
        cin >> n >> k;
        for (int i = 0; i < n; ++i) {
            int x; cin >> x;
            st.insert(x);
        }
        cout << BS() << endl;
        st.clear();
    }
    kill;
}