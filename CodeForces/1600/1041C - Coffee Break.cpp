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

int n, m, d;
set<pair<int, int> > st;
int ans[N], a[N];

int can(int x){}

int BS ()
{
    int lo = 1, hi = 4;
    int mid, res = INT32_MAX;
    while (lo <= hi){
        mid = lo + (hi - lo + 1)/2;
        if (can(mid) < res){
            res = mid;
            hi = mid - 1;
        }
        else {
            lo = mid + 1;
        }
    }
    return res;
}

int main () {
    IO;
#ifdef LOCAL_MACHINE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    //    freopen("input.in", "r", stdin);
    cin >> n >> m >> d;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        st.insert({a[i], i});
    }

    int day = 0;
    while(!st.empty()){
        day++;
        int pos = st.begin()->second;
        ans[pos] = day;
        st.erase(st.begin());

        while(true){
            auto it = st.lower_bound({a[pos]+d+1, 0});

            if (it == st.end())
                break;
            pos = it->second;
            st.erase(it);
            ans[pos] = day;
        }
    }
    cout << day << endl;
    for (int i = 1; i <= n; ++i)
        cout << ans[i] << ' ';
    cout << endl;
    kill;
}