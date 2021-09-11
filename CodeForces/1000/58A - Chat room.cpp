#include <bits/stdc++.h>
#include <string>
 
using namespace std;
 
int main()
{
    string s;
    cin >> s;
 
    int pos1, pos2, pos3, pos4, pos5;
 
    pos1 = s.find('h');
    pos2 = s.find('e', pos1+1);
    pos3 = s.find('l',pos2+1);
    pos4 = s.find('l', pos3+1);
    pos5 = s.find('o', pos4+1);
    if (pos1 > pos2)
    {
        cout << "NO" << endl;
        return 0;
    }
    if (pos2 > pos3)
    {
        cout << "NO" << endl;
        return 0;
    }
    if (pos3 > pos4)
    {
        cout << "NO" << endl;
        return 0;
    }
    if (pos4 > pos5)
    {
        cout << "NO" << endl;
        return 0;
    }
    if (pos1 == -1 || pos2 == -1 || pos3 == -1 || pos4 == -1 || pos5 == -1)
    {
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
    return 0;
}