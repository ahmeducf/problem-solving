#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <vector>
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string str;
    vector<int>vect;
    vector<int>::iterator it;
    int cnt = 0;
    getline (cin,str);
    for(int i = 0; i < str.length(); i++){
        if (isalpha(str[i])){
            it = find (vect.begin(), vect.end(), str[i]);
            if(it == vect.end()){
                cnt++;
                vect.push_back(str[i]);
            }
            else
            {
                ;
            }
 
        }
    }
    cout << cnt << endl;
    return 0;
}