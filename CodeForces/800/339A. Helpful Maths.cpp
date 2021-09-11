#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <vector>
 
using namespace std;
 
int main()
{
    string s;
    cin >> s;
    string s1;
    for(int i = 0; i < s.length(); i++){
        if (s[i] != '+'){
             s1.push_back(s[i]);
        }
    }
    sort(s1.begin(), s1.end());
    cout << s1[0];
    for (int i = 1; i < s1.length(); i++){
        cout << '+' << s1[i];
    }
    return 0;
}