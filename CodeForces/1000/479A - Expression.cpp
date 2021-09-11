#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
    int  a = 0, b = 0, c = 0, re1 = 0, re2 = 0, re3 = 0, re4 = 0, re = 0;
    int maxx, max1, max2, max3;
    while (a < 1 | b < 1 | c < 1 || a > 10 | b > 10 | c > 10)
        cin >> a >> b >> c;
    re = a + b + c;
    re1 = a + b * c;
    re2 = a * (b + c);
    re3 = a * b * c;
    re4 = (a + b) * c;
    max1 = (re1 + re2 + abs(re1 - re2)) / 2;
    max2 = (re3 + re4 + abs(re3 - re4)) / 2;
    maxx = (max1 + max2 + abs(max1 - max2)) / 2;
    max3 = (maxx + re + abs(re - maxx)) / 2;
    cout << max3 << endl;
    return 0;
}