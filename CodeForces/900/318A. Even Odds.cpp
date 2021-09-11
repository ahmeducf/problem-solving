#include <iostream>
using namespace std;
 
int main()
{
    unsigned long long n = 0, k = 0;
 
        cin >> n >> k;
 
    if (k <= n / 2 && n % 2 == 0)
        cout << k + (k - 1) << endl;
    if (k <= n / 2 + 1 && n % 2 != 0)
        cout << k + (k - 1) << endl;
 
    if (n % 2 == 0 && k > n / 2)
    {
        cout << (k - n / 2) * 2 << endl;
    }
 
    if (n % 2 != 0 && k > n / 2 + 1)
            cout << (k - (n / 2 + 1)) * 2 << endl;
 
        return 0;
}