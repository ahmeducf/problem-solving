#include <iostream>
 
using namespace std;
int main()
{
    int arr[5][5];
    int r = 0, c = 0;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cin >> arr[i][j];
            if (arr[i][j] == 1){
                r = i+1;
                c = j+1;
                break;
            }
        }
    }
    int res = (abs(c-3)) + (abs(r-3));
    cout << res << endl;
    return 0;
}