#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    string arr[n];
    string arr1[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    arr1[0] = arr[0];
    cout << "NO" << endl;
    for (int i = 1; i < n; i++){
        if (count(arr1, arr1+n, arr[i])){
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        arr1[i] = arr[i];
    }
    return 0;
}