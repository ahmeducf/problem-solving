/*
 * Directed by: Ahmed Salah
 * */
 
#include <bits/stdc++.h>
#define kill return 0
#define space " "
#define endl '\n'
#define PI  3.14159265358979323846
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
 
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef bitset<1000000010> bs;
typedef vector<int> vi;
typedef map<int, int> mii;
 
ll sumDigits (ll x){
    ll lastDigit;
    ll sum = 0;
    while (x){
        lastDigit = x % 10;
        sum += lastDigit;
        x /= 10;
    }
    return sum;
}
 
ll my_pow(ll n, int p) {
    ll res = 1;
 
    while(p--) {
        res *= n;
    }
 
    return res;
}
 
int main(){
    IO;
//    freopen("infile.txt", "r", stdin);
//    freopen("outfile.txt", "w", stdout);
    auto start = std::chrono::high_resolution_clock::now();
    ///
 
    ll x, y, l, r;
    cin >> x >> y >> l >> r;
    int a = log(r) / log(x);
    int b = log(r) / log(y);
 
    ll unlucky;
    ll cnt = 0;
    vector<ll> v;
    for (int i = 0; i <= a; ++i) {
        for (int j = 0; j <= b; ++j) {
            unlucky = my_pow(x, i) + my_pow(y, j);
            if (unlucky >= l && unlucky <= r){
                v.push_back(unlucky);
                cnt++;
            }
        }
    }
 
    if (cnt == r-l+1){
        cout << 0 << endl;
        return 0;
    }
    if (cnt == 0){
        cout << r-l+1 << endl;
        return 0;
    }
    v.push_back(l-1);
    v.push_back(r+1);
    sort(v.begin(), v.end());
    ll mx = 0;
    ll n = v.size();
    for (int i = 1; i < n; ++i) {
        if (v[i] - v[i-1] -1 > mx){
            mx = max(mx, v[i] - v[i-1] -1);
        }
    }
    cout << mx << endl;
 
    ///
    auto end = std::chrono::high_resolution_clock::now();
//    #define EXECUTION_TIME
#ifdef EXECUTION_TIME
    std::cerr << "Execution time: "
                  << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count()
                  << " ms" << endl;
#endif
    kill;
}