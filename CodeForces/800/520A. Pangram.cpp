 #include <bits/stdc++.h>
 #include <string>
 #include <ctype.h>
 
using namespace std;
 
 
int main()
{
    int n;
    cin >> n;
 
        char arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (isupper(arr[i]))
                arr[i] = tolower(arr[i]);
        }
        char alpha = 'a';
        for (int i = 0; i < 26; i++)
        {
            int c = 0;
            c = count(arr, arr+n, alpha);
            if (c == 0)
            {
                cout << "NO" << endl;
                return 0;
            }
            else
            {
                alpha++;
            }
        }
        cout << "YES" << endl;
 
    return 0;
}