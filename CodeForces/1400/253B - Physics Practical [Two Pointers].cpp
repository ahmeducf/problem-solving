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
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n; cin >> n;
    int arr[n];
    for (size_t i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    sort(arr, arr+n);

	if (arr[0]*2 == arr[n-1])
	{
		cout << 0 << endl;
		kill;
	}

    int ans = INT32_MAX;
    int i = 0, j = 0;
	while (j < n)
	{
		if (arr[j] <= arr[i]*2){
			j++;
		}
		else {
			i++;
		}
		ans = min(ans, n - (j-i));
	}
	
    
    
    cout << ans << endl;
    kill;
}