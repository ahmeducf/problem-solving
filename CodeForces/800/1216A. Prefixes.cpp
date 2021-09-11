#include <bits/stdc++.h>
#include <string>
 
using namespace std;
 
int main()
{
    string s, s1;
    int n;
    int cnt = 0, cnt_a = 0, cnt_b = 0;
    cin >> n >> s;
 
    for (int i = 2; i <= n; i = i + 2)
    {
        for (int j = i-2; j < i; j++){
            if (s[j] == 'a')
                cnt_a++;
            else
                cnt_b++;
        }
        if (cnt_a > cnt_b){
            while (cnt_b != cnt_a)
            {
                cnt_b++;
                cnt_a--;
                cnt++;
            }
        }
        if (cnt_a < cnt_b){
            while (cnt_a != cnt_b)
            {
                cnt_a++;
                cnt_b--;
                cnt++;
            }
        }
    }
        for (int j=1; j < n ; j=j+2)
        {
            if (s[j] == s[j-1])
            {
                if (s[j] == 'a')
                    s[j-1] = 'b';
                else
                    s[j-1] = 'a';
            }
        }
 
    cout << cnt << endl << s << endl;
    return 0;
}