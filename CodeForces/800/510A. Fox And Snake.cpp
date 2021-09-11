#include<iostream>
using namespace std;
 
int main()
{
    int n = 0, m = 0, cnt = 0;
    cin >> n >> m;
    char arr[n][m];
 
    for (int i = 0; i < n; i++)
    {
        if (i%2 == 0)
        {
            for (int j = 0; j < m; j++)
            {
                arr[i][j] = '#';
 
            }
        }
        else
        {
            if (cnt % 2 == 0)
            {
                for (int j = 0; j < m; j++){
                    if (j == m-1)
                        arr[i][j] = '#';
                    else
                        arr[i][j] = '.';
                }
                cnt++;
            }
            else
            {
                for (int j = 0; j < m; j++)
                {
                    if (j == 0)
                        arr[i][j] = '#';
                    else
                        arr[i][j] = '.';
                }
                cnt++;
            }
        }
    }
    for (int i= 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j];
        }
        cout << "\n";
    }
        return 0;
}