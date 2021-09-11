#include <iostream>
using namespace std;
 
int main()
{
    unsigned long long w = 0, k = 0, money_r = 0;
    unsigned long long n = 0;
 
    cin >> k >> n >> w;
 
    for (int i = 1; i <= w; i++)
    {
        money_r += i * k;
    }
    if (money_r > n)
    {
        cout << money_r - n << endl;
    }
    else
        cout << 0 << endl;
    return 0;
}