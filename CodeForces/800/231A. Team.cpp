#include <iostream>
 
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n][3];
    int cnt =0, cnt1 = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 3; j++){
            cin >> arr[i][j];
            if (arr[i][j] == 1){
                cnt1++;
            }
        }
        if (cnt1 >= 2){
            cnt++;
        }
        cnt1 = 0;
    }
    cout << cnt << endl;
    return 0;
}