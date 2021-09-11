#include <bits/stdc++.h>
 #include <string>
 #include <ctype.h>
 
using namespace std;
 
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < 1; i++)
    {
        if (islower(s[i]))
        {
            s[i] = toupper(s[i]);
            cout << s << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
    return 0;
}