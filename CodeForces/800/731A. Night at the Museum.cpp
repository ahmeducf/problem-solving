#include <iostream>
#include <bits/stdc++.h>
 
 
using namespace std;
 
int main()
{
    string str;
    cin >> str;
    int moves = 0;
    int start = 0;
    int index;
    int walk;
    for (int i = 0; i < str.length(); i++){
         index = str[i] - 97;
         walk = abs(start-index);
        if (walk < 13){
            moves += walk;
        }
        else{
            moves += 26-walk;
        }
        start = index;
    }
    cout << moves << endl;
    return 0;
}