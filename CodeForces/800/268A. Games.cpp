#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <vector>
 
using namespace std;
 
int main()
{
    string s;
    int cnt = 0;
    int n;
    cin >> n;
    int arr[n][2];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 2; j++){
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(arr[i][0] == arr[j][1]){
            cnt++;
        }
        }
    }
    cout << cnt << endl;
    return 0;
}