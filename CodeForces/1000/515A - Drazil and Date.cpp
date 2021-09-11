#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
{
    int a = 0, b = 0, counts = 0;
    unsigned int s = 0;
    while (s < 1 || a < -10e+9 || b < -10e+9 || s > 2 * 10e+9 || a > 10e+9 || b > 10e+9)
        cin >> a >> b >> s;
    if (a == 0 && b == 0 && s % 2 != 0)
        cout << "No" << endl;
    else if (a == 0 && b == 0 && s % 2 == 0)
        cout << "yes" << endl;
    else
    {
        counts = abs(a) + abs(b);
 
 
        if (counts == s)
            cout << "Yes" << endl;
        else if (s < abs(counts))
            cout << "No" << endl;
        else if (s > counts && (s - counts) % 2 == 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}