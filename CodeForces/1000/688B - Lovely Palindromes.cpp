#include <iostream>
#include <deque>
#include <string>
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string n;
    cin >> n;
 
    string arr[n.length()];
    int x = 0;
    for (int i = 0; i < n.length();i++){
        arr[i]=n[i];
    }
    reverse(arr,arr+n.size());
    cout << n;
    for (int i =0;i<n.length();i++){
        cout << arr[i];
    }
    cout << endl;
 
    return 0;
}