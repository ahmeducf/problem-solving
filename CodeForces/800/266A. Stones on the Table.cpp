#include <iostream>
#include <algorithm>
#include <string>
 
using namespace std;
 
int main()
{
    string n;
    cin >> n;
    int cnt = 0;
    int m = n.length();
    for (int i = 0; i < n.length(); i++){
        if(i <= m/2){
            if (n[i] != n[m-i-1]){
                cnt ++;
            }
        }
    }
    if (cnt > 1 || cnt == 0){
        cout << "NO" << endl;
    }
    if (cnt == 1)
        cout << "YES" << endl;
    return 0;
 
}
