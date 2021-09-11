#include <iostream>
using namespace std;
 
int main()
{
    long long n = 0, hired = 0, count_u = 0;
 
    cin >> n ;
    long long arr[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > 0)
        {
            hired += arr[i];
        }
        if (arr[i] < 0)
        {
            if (hired <= 0)
                count_u++;
            if (hired > 0)
                hired--;
        }
 
    }
    cout << count_u << endl;
 
 
    return 0;
}