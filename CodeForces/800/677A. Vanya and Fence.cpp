#include <iostream>
 
using namespace std;
int main()
{
    int n, h;
    cin >> n >> h;
    int arr[n];
    int cnt = 0;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        if (arr[i] <= h){
            cnt++;
        }
        else
            cnt = cnt+2;
    }
    cout << cnt << endl;
    return 0;
}