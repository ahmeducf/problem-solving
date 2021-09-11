#include <iostream>
 
using namespace std;
int main()
{
    int n;
    cin >> n;
    char s[n+1];
    cin >> s;
    int cnt1 = 0;
    int cnt2 = 0;
    for (int i = 0; i < n+1;i++){
        if (s[i] == 'A')
            cnt1++;
        if (s[i] == 'D')
            cnt2++;
    }
    if (cnt1 > cnt2){
        cout << "Anton" << endl;
    }
    else if (cnt2 > cnt1){
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }
    return 0;
}