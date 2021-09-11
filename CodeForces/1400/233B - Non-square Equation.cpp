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
 
int main(){
    IO;
//    freopen("infile.txt", "r", stdin);
//    freopen("outfile.txt", "w", stdout);
    auto start = std::chrono::high_resolution_clock::now();
    ///
 
    ll n; cin >> n;
    ll d, x;
    // X = ( -s + sqrt(s*s + 4n) ) / 2
    for (int s = 0; s <= 90; ++s) {
        d = s * s + 4 * n;
        ll sq = sqrt(d);
        if (sq * sq == d){
            x = (-s + sq) / 2;
 
            if (x > 0 && sumDigits(x) == s){
                cout << x << endl;
                return 0;
            }
        }
    }
    cout << -1 << endl;
 
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