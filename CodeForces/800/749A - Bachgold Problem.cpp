#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cmath>
typedef unsigned long long ull;
using namespace std;
int main() {
    int n;
    cin >> n;
    if (n % 2){
        n -= 3;
        cout << (n/2 + 1) << endl;
        cout << 3 << endl;
        for (int i = 0; i < n / 2; ++i) {
            cout << 2 << endl;
        }
    } else{
        cout << (n/2) << endl;
        for (int i = 0; i < n / 2; ++i) {
            cout << 2 << endl;
        }
    }
    return 0;
}