#include <iostream>
#include <string>
 
using namespace std;
int main()
{
    string str1;
    string str2;
    cin >> str1 >> str2;
    for (int i = 0; i < str1.length(); i++){
        str1[i] = toupper(str1[i]);
        str2[i] = toupper(str2[i]);
    }
    if (str1.compare(str2) == 0){
        cout << 0 << endl;
    }
    else if (str1.compare(str2) > 0){
        cout << 1 << endl;
    }
    else {
        cout << -1 << endl;
    }
    return 0;
}