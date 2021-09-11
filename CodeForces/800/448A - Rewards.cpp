#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cmath>
typedef unsigned long long ull;
using namespace std;
int main() {
    int a1, a2, a3;
    int b1, b2, b3;
    int n;
    cin >> a1 >> a2 >> a3;
    cin >> b1 >> b2 >> b3;
    cin >> n;

    int cups = ceil(((double)(a1 + a2 + a3) / 5));
    int medals = ceil(((double)(b1 + b2 + b3) / 10));
    n -= (cups+medals);
    if (n < 0){
        cout << "NO" << endl;
    } else{
        cout << "YES" << endl;
    }
    return 0;
}