/*
 * Directed by: Ahmed Salah
 * */

#include <bits/stdc++.h>
#define kill return 0
#define space " "
#define endl '\n'
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef bitset<1000000010> bs;
typedef vector<int> vi;
typedef map<int, int> mii;

ll cost;
bool pred(int arr[], int n, ll s, int k){
    vector<ll> v;
    for (int i = 0; i < n; i++)
        v.push_back(arr[i] + (ll)(i + 1)*k);
    sort(v.begin(), v.end());

    ll sum = accumulate(v.begin(), v.begin() + k, (ll)0);

    if (sum <= s){
        cost = sum;
        return true;
    }
    else
        return false;
}

int main(){
    IO;
    int n; ll s;
    cin >> n >> s;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    ll lo = 1, hi = n;
    ll mid, ans = 0;
    while (lo <= hi){
        mid = lo + (hi - lo) / 2;

        if (pred(arr, n, s, mid)){
            ans = mid;
            lo = mid + 1;
        }
        else
            hi = mid - 1;
    }

    cout << ans << " " << cost << endl;
    kill;
}

