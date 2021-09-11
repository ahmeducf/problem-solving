#include <bits/stdc++.h>
#include <string>
 
using namespace std;
 
int main()
{
    string pl;
    cin >> pl;
    int c1 = 1;
    for (int i = 1; i < pl.length(); i++)
    {
        if (pl[i] == pl[i-1])
        {
            c1++;
        }
        else
        {
            c1 = 1;
        }
        if (c1 >= 7)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}