#include <iostream>
#include <bits/stdc++.h>
 
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int birds[n];
    for (int i = 0; i < n; i++){
        cin >> birds[i];
    }
    int m;
    cin >> m;
    int arr[m][2];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < 2; j++){
            cin >> arr[i][j];
        }
        birds[arr[i][0]-2] += arr[i][1] - 1;
        birds[arr[i][0]] += birds[arr[i][0]-1] - arr[i][1];
        birds[arr[i][0]-1] = 0;
    }
    for (int i = 0; i < n; i++){
        cout << birds[i] << endl;
    }
    return 0;
}