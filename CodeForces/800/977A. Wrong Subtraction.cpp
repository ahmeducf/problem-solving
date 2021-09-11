#include <bits/stdc++.h>
#include <string>
 
using namespace std;
 
int main()
{
    int n, k, q;
    cin >> n >> k;
    for (int i = 0; i < k; i++)
    {
        q = n % 10;
        if (q == 0)
        {
            n = n / 10;
        }
        if (q)
        {
            n = n - 1;
        }
    }
    cout << n << endl;
    return 0;
}