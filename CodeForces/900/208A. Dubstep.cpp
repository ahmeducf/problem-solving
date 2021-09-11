#include <bits/stdc++.h>
#include <string>
 
using namespace std;
 
int main()
{
    string s;
    cin >> s;
 
    int pos = 0, pos1 = 0;
 
    while (pos != -1)
    {
        pos = s.find("WUB");
 
        if (pos == 0)
            s.erase(0, 3);
        if (pos > 0 )
        {
            s.erase(pos, 3);
            if (s[pos-1] != ' ')
                s.insert(pos, " ");
        }
    }
    while (pos1 != -1){
        pos1 = s.find(" ", s.length());
        if (pos1 != -1)
            s.erase(pos, 1);
    }
    cout << s << endl;
    return 0;
}