#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cmath>
typedef unsigned long long ull;
using namespace std;

int main() {
    int c1, c2, c3, c4, c5;
    cin >> c1 >> c2 >> c3 >> c4 >> c5;
    int res = c1 + c2 + c3 + c4 + c5;
    if(res % 5 || res == 0){
        cout << -1 << endl;
    } else{
        cout << res / 5 << endl;
    }
}