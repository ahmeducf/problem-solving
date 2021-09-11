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


int main(){
    IO;
    int n, q, tc = 1, target;
    while (cin >> n >> q && n != 0 && q != 0){
        int arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        sort(arr, arr+n);

        printf("CASE# %d:\n", tc);
        while (q--){
            cin >> target;
            int lo = 0, hi = n-1;
            int mid;
            while (lo < hi){
                mid = lo + (hi - lo) / 2;

                if (arr[mid] >= target){
                    hi = mid;
                } else{
                    lo = mid + 1;
                }
            }
            if (arr[lo] == target)
                printf("%d found at %d\n", target, lo + 1);
            else
                printf("%d not found\n", target);
        }
        tc++;
    }
    kill;
}

