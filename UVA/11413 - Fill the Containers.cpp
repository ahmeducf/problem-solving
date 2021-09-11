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

bool isRightCapacity (int vessels[], int n, int m, int cap){
    m--;
    int capacity = cap;

    for (int i = 0; i < n; ++i) {
        if (vessels[i] > cap)
            return false;

        if (vessels[i] <= capacity){
            capacity -= vessels[i];
        } else if (vessels[i] > capacity){
            if (m){
                capacity = cap;
                capacity -= vessels[i];
                m--;
            } else{
                return false;
            }
        }
    }
    return true;
}

int main(){
    IO;
    int n, m;
    while (cin >> n >> m){
        int vessels[n]; int sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> vessels[i];
            sum += vessels[i];
        }
        
        int lo = 1, hi = sum;
        int mid, ans = -1;
        while (lo <= hi){
            mid = lo + (hi - lo) / 2;

            if (isRightCapacity(vessels, n, m, mid)){
                ans = mid;
                hi = mid - 1;
            }
            else
                lo = mid + 1;
        }
        cout << ans << endl;
    }


    kill;
}