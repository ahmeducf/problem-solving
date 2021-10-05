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
typedef string str;
typedef vector<int> vi;


int lower(int m, int arr[], int sz){
    int low = 0; int hi = sz - 1;
    int md = hi / 2;
    int res = m;
    while (low <= hi){
        if (arr[md] < m){
            low = md+1;
        }
        if (arr[md] >= m){
            hi = md-1;
        }
        md = (hi + low) / 2;
    }
    if (hi < 0) return m;
    return arr[hi];
}

int upper(int m, int arr[], int sz){
    int low = 0; int hi = sz - 1;
    int md = hi / 2;
    while (low <= hi){
        if (arr[md] > m){
            hi = md - 1;
        }
        if (arr[md] <= m){
            low = md + 1;
        }
        md = (hi + low) / 2;
    }
    if(low >= sz) return m;
    return arr[low];
}
int main()
{
    IO;
    int n; cin >> n;
    int laddies[n];
    for (int i = 0; i < n; i++)
        cin >> laddies[i];

    int q; cin >> q;
    int queries[n];
    for (int i = 0; i < q; ++i) {
        cin >> queries[i];
        int l = lower(queries[i], laddies, n);
        int u = upper(queries[i], laddies, n);

        if (l == queries[i])
            cout << "X ";
        else
            cout << l << " ";

        if (u == queries[i])
            cout << "X" << endl;
        else
            cout << u << endl;

    }
    return 0;
}