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
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    map<int, int>A;
    set<int>s;
    int i = 0;
    for (; i < k; ++i) {
        A[arr[i]]++;
        if (A[arr[i]] == 1)
            s.insert(arr[i]);
        else
            s.erase(arr[i]);

    }
    auto it = s.rbegin();

    if (s.empty())
        cout << "Nothing" << endl;
    else
        cout << *it << endl;

    int j = 0;
    for (; i < n; i++){
        A[arr[j]]--;
        if (A[arr[j]] == 1)
            s.insert(arr[j]);
        else
            s.erase(arr[j]);

        A[arr[i]]++;
        if (A[arr[i]] == 1)
            s.insert(arr[i]);
        else
            s.erase(arr[i]);

        it = s.rbegin();
        if (s.empty())
            cout << "Nothing" << endl;
        else
            cout << *it << endl;

        j++;
    }
    kill;
}

