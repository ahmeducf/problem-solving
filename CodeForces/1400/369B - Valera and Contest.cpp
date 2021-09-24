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
    int n, k, l, r, s_n, s_k;
    cin >> n >> k >> l >> r >> s_n >> s_k;
    int arr[n];
    int rem = s_k % k;
    int i;
    for (i = 0; i < k; ++i) {
        arr[i] = (s_k / k) + (rem > 0);
        rem--;
        cout << arr[i] << " ";
    }
    if (n != k) {
        s_n -= s_k;
        rem = s_n % (n-k);
    }
    for (; i < n; ++i) {
        arr[i] = (s_n / (n-k)) + (rem > 0);
        rem--;
        cout << arr[i] << " ";
    }
    cout << endl;
    kill;
}