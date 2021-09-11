#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
typedef unsigned long long ull;
using namespace std;
int main() {
    int b, n;
    bool flag = false;
    int debtor, creditor, deb_Value;
    while ((cin >> b >> n) && (n || b)){
        vector<int> banks_Reserves(b);
        for (int i = 0; i < b; i++){
            cin >> banks_Reserves[i];
        }

        for (int i = 0; i < n; ++i) {
            cin >> debtor >> creditor >> deb_Value;

            banks_Reserves[debtor-1] -= deb_Value;
            banks_Reserves[creditor-1] += deb_Value;
        }
        for (int i = 0; i < b; ++i) {
            if (banks_Reserves[i] < 0){
                cout << "N" << endl;
                flag = true;
                break;
            }
        }
        if (!flag){
            cout << "S" << endl;
        }
        flag = false;
    }
    return 0;
}