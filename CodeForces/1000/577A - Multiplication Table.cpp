#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cmath>
typedef unsigned long long ull;
using namespace std;
int main() {
    int n, x, cnt = 0;
    cin >> n >> x;
    for (int i = 1; i <= x; ++i) {
        if (i > n) break;
        if (x % i == 0){
            if (x / i <= n)
                cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}