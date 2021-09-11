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


double ans = 0;
bool possible (const double arr[], int n, double energy, double k){
    double increased = 0, decreased = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == energy)
            continue;

        else if (arr[i] < energy)
            increased += energy - arr[i];
        else
            decreased += arr[i] - energy;
    }

    if (increased == 0 && decreased == 0){
        ans = 0;
        return false;
    }
    return decreased - ((decreased * k) / 100) >= increased;
}

int main(){
    IO;
    int n, k;
    cin >> n >> k;
    double arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    double lo = 0, hi = 1000;
    double mid;
    while (fabs(hi - lo) > 1e-12){
        mid = lo + (hi - lo) / 2.0;
        if (possible(arr, n, mid, k)){
            ans = mid;
            lo = mid;
        } else{
            hi = mid;
        }
    }
    cout << fixed << setprecision(9) << ans << endl;
    kill;
}

