#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n = 0, k =0;
    int c = 0;
    cin >> n >> k;
    int arr[n];
    for (int i =0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < k; i++)
    {
        if (arr[i] != 0)
        {
            c++;
        }
    }
    for (int i = k; i < n; i++)
    {
        if (arr[i] == arr[k-1] && arr[i] != 0)
        {
            c++;
        }
    }
    cout << c << endl;
    return 0;
}