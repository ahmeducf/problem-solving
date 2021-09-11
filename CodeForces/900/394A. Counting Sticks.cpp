#include <iostream>
#include <algorithm>

 
using namespace std;
 
int main()
{
    string sticks;
    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    cin >> sticks;
    int op = sticks.find("+");
    int opp = sticks.find("=");
    for (int i = 0; sticks[i] != '+'; i++){
        cnt1++;
    }
    for (int i = op+1; i < opp; i++){
        cnt2++;
    }
    for (int i = opp+1; i < sticks.length(); i++){
        cnt3++;
    }
 
    if (cnt1+cnt2 == cnt3){
        for (int i = 0; i < sticks.length(); i++){
            cout << sticks[i];
        }
        cout << endl;
    }
    else if (cnt1+cnt2 == cnt3-2){
        cout << "|";
        for (int i = 0; i < sticks.length()-1; i++){
            cout << sticks[i];
        }
        cout << endl;
    }
    else if (cnt1+cnt2-2 == cnt3){
        if (cnt1 >= cnt2){
            for (int i = 1; i < sticks.length(); i++){
                cout << sticks[i];
            }
            cout << "|" << endl;
        }
        if (cnt2 > cnt1){
            for (int j = 0; j <= op; j++){
                cout << sticks[j];
            }
            for (int k = op+2; k < sticks.length(); k++){
                cout << sticks[k];
            }
            cout << "|" << endl;
        }
    }
    else {
        cout << "Impossible" << endl;
    }
    return 0;
}