#include <iostream>
using namespace std;
 
int main()
{
    unsigned int n = 0, m = 0, a = 0;
    unsigned long long int stones = 0;
    unsigned  long long f1 = 0, f2 = 0;
    while (m < 1 | n < 1 | a < 1 || m > 1000000000 | n > 1000000000 | a > 1000000000)
        cin >> n >> m >> a;
    f1 = m / a;
    if (m % a != 0)
        f1 ++;
    f2 = n / a;
    if (n % a != 0)
        f2 ++;
    stones = f1 * f2;
    cout << stones << endl;
    return 0;
}