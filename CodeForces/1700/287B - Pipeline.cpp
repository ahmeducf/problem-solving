/////////////////////////////////////////
////////////////////////////////////////
/////                            //////
/////  +++++++++++++++++++++    //////
/////  |A.H.M.E.D S.A.L.A.H|   //////
/////  +++++++++++++++++++++  //////
/////                        //////
//////////////////////////////////
/////////////////////////////////

#include <iostream>
#include <algorithm>

#define ll long long

using namespace std;
ll sum(ll n){
    return (n * (n+1)) / 2;
}

ll sum(ll s, ll e){
    if (s <= 1) return sum(e);

    return sum(e) - sum(s - 1);
}

ll minSplitters(ll k, ll n){
    ll st = 1; ll  en = k;

    while (st < en){
        ll md = (st + en) / 2;
        ll s = sum(md, k);

        if (s == n) return k - md + 1;
        else if (s > n){
            st = md + 1;
        } else{
            en = md;
        }
    }
    return k - st + 2;
}

int main() {
    ll n, k;
    cin >> n >> k;

    if (n == 1) cout << 0 << endl;
    else if (n <= k) cout << 1 << endl;
    else {
        n--;
        k--;

        if (sum(k) < n) cout << -1 << endl;
        else cout << minSplitters(k, n) << endl;
    }
    return 0;
}
