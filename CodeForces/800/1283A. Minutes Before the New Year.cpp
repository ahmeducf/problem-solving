#include <iostream>
#include <bits/stdc++.h>
 
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    int arr[t];
    int x, y;
    for(int i = 0; i < t; i++){
        cin >> x >> y;
        arr[i] = 1440 - ((x*60)+y);
    }
    for(int i = 0; i < t; i++){
        cout << arr[i] << endl;
    }
    return 0;
}