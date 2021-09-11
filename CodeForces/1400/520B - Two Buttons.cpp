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
    int n, m, ans = 0;
    cin >> n >> m;

	// To-D0: Assume we want to get n from m by adding 1 or dividing by 2
    while (n != m)
    {
        if (m > n){
			if (m % 2 == 0){
				m /= 2;
				ans++;
			}
            else {
				m++;
				ans++;
			}
		}
        else {
			m++;
			ans++;
		}
    }

    cout << ans << endl;
    kill;
}