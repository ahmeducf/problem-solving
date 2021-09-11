#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cmath>
typedef unsigned long long ull;
using namespace std;
int main() {
    int n, k;
    cin >> n;
    vector<vector<int>> iv(n, vector<int>(n, 0));
    vector<int> p(n, 0);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> k;
            iv[i][j] = k;
        }
    }

    for (int x = 1; x < n; ++x) {
        for (int i = 0; i < n; ++i) {
            int cnt = 0;
            for (int j = 0; j < n; ++j) {
                if (iv[i][j] == x){
                    cnt++;
                }
            }
            if (cnt == n-x){
                p[i] = x;
                break;
            }
        }
    }

    for (auto val : p){
        if (val != 0){
            cout << val << endl;
        } else{
            cout << n << endl;
        }
    }
    return 0;
}