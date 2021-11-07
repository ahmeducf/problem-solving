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
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    //    freopen("input.in", "r", stdin);
    int t; cin >> t;
    while(t--){
        deque<int> dq;
        int n; cin >> n;
        int x;
        for (int i = 0; i < n; ++i) {
            cin >> x;
            if (x < dq.front()){
                dq.push_front(x);
            }
            else {
                dq.push_back(x);
            }
        }
        for (int i = 0; i < n; ++i) {
            cout << dq[i] << " ";
        }
        cout << endl;
    }
    kill;
}
