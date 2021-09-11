#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cmath>
typedef unsigned long long ull;
using namespace std;

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if (x1 == x2){
        int l = abs(y1-y2);
        cout << x1+l << " " << y1 << " " << x2+l << " " << y2 << endl;
    } else if (y1 == y2){
        int l = abs(x1-x2);
        cout << x1 << " " << y1+l << " " << x2 << " " << y2+l << endl;
    } else if (abs(x1-x2) == abs(y1-y2)){
        int l = abs(x1-x2);
        if (y1 > y2){
            cout << x1 << " " << y1-l << " " << x2 << " " << y2+l << endl;
        } else{
            cout << x1 << " " << y1+l << " " << x2 << " " << y2-l << endl;
        }
    } else{
        cout << -1 << endl;
    }
}