#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
    int r = 0, c = 0, count_c = 0, count_r = 0;
    cin >> r >> c;
    char arr[r][c];
 
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }
 
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] == 'S')
                break;
            else
            {
                if (j != c-1)
                    continue;
                if (j == c-1)
                    count_r += c;
            }
        }
    }
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            if (arr[j][i] == 'S')
                break;
            else
            {
                if (j != r-1)
                    continue;
                if (j == r-1)
                    count_c += r;
            }
        }
    }
    int res = (count_r + count_c) - ((count_r / c) * (count_c / r));
    cout << res << endl;
 
    return 0;
}