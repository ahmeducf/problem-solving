/*
 * Directed By: Ahmed Salah
 * */

#include <iostream>
using namespace std;

int main()
{
    short n = 0, m = 0;
    int count_d = 0, domi = 0;
    while (m < 1 | n < 1 || m > 16 | n > 16)
        cin >> n >> m;

    while (m > 1)
    {
        count_d ++;
        m-= 2;
    }
    count_d = count_d * n;
    if (m % 2 != 0)
        domi = count_d + (n / 2);
    else
        domi = count_d;
    cout << domi << endl;

    return 0;
}