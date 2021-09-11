/*
 * Directed By: Ahmed Salah
 * */

#include <iostream>
using namespace std;
 
int main()
{
    short w = 0;
    while (w < 1 || w > 100)
        cin >> w;
    switch (w)
    {
    case 2 :
        cout << "NO" << endl;
        break;
    default :
        if (w % 2 == 0)
            cout << "YES" << endl;
        if (w % 2 != 0)
            cout << "NO" << endl;
    }
    return 0;
}