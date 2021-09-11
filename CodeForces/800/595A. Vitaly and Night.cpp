#include <iostream>
 
using namespace std;
 
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][2*m];
    int cnt = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 2*m; j++){
            cin >> arr[i][j];
        }
    }
 
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m*2; j++){
            if (arr[i][j] == 1){
                cnt++;
                if (j % 2 == 0){
                    j += 1;
                }
            }
 
        }
    }
    cout << cnt << endl;
    return 0;
}