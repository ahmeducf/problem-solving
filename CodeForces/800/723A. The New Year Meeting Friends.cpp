#include <iostream>
#include <cmath>
using namespace std;
int max(int a, int b , int c);
int min(int a, int b , int c);
 
 
int main()
{
    int  x1 = 0, x2 = 0, x3 = 0;
    int dist, big, small, ave;
    while (x1 < 1 | x2 < 1 | x3 < 1 || x1 > 100 | x2 > 100 | x3 > 100)
        cin >> x1 >> x2 >> x3;
    big = max(x1, x2, x3);
    small = min(x1, x2, x3);
    if (x1 != big && x1 != small)
        ave = x1;
    if (x2 != big && x2 != small)
        ave = x2;
    if (x3 != big && x3 != small)
        ave = x3;
    dist = abs(big - ave) + abs(small - ave);
    cout << dist << endl;
    return 0;
}
int max(int a, int b , int c)
{
    int maximum = a;
    if (b > maximum)
        maximum = b;
    if (c > maximum)
        maximum = c;
    return maximum;
}
int min(int a, int b , int c)
{
    int minimum = a;
    if (b < minimum)
        minimum = b;
    if (c < minimum)
        minimum = c;
    return minimum;
}