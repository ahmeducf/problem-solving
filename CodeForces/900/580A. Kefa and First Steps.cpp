#include <iostream>
using namespace std;
 
int main()
{
    long long n = 0, count_u = 0, count_s = 0;
    cin >> n ;
    long long arr[n];
    cin >> arr[0];
    count_u++;
    int oldcount = count_u;
    for (long long i = 1; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] >= arr[i-1])
        {
            count_u += 1;
        }
        if (arr[i] < arr[i-1])
        {
            count_s = count_u;
            if (oldcount < count_s)
                oldcount = count_s;
            count_u = 0;
            count_u++;
        }
    }
    if (count_u > oldcount)
        oldcount = count_u;
 
    cout << oldcount << endl;
    return 0;
}