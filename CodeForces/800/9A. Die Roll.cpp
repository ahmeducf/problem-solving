#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
{
    int x = 0, y = 0;
    int maxi = 0, countt = 0;
    while (x < 1 || y < 1 || x > 6 || y > 6)
        cin >> x >> y;
    maxi = (x + y + abs(x-y)) / 2;
    countt = 0;
    while (maxi <= 6)
    {
        maxi++;
        countt++;
    }
    switch (countt)
    {
    case 1 :
        cout << "1/6" << endl;
        break;
    case 2 :
        cout << "1/3" << endl;
        break;
    case 3 :
        cout << "1/2" << endl;
        break;
    case 4 :
        cout << "2/3" << endl;
        break;
    case 5 :
        cout << "5/6" << endl;
        break;
    case 6 :
        cout << "1/1" << endl;
        break;
    }
    return 0;
}