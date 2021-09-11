#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cmath>
typedef unsigned long long ull;
using namespace std;

int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int k = n / m * b;
    int mod = n % m;
    k += (mod*a < b) ? mod*a : b;

    if ((double)(b/m) < (double)(a)){
        cout << k << endl;
    } else if ((double)(b/m) >= (double)(a)){
        cout << n * a << endl;
    }
}