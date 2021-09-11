#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cmath>
typedef unsigned long long ull;
using namespace std;

bool calls[100005];
bool artists[100005];
int main() {
    int n, m, z;
    cin >> n >> m >> z;
    int call = 0, artist = 0;
    if (n == m || n == 1){
        cout << z/m << endl;
        return 0;
    }
    if (m == 1){
        cout << z/n << endl;
        return 0;
    }

    while (call < z){
        call += n;
        calls[call] = 1;
    }
    while (artist < z){
        artist += m;
        artists[artist] = 1;
    }


    int cnt  = 0;
    for (int i = 0; i <= z; ++i) {
        if (calls[i] == 1 & calls[i] == artists[i]){
            cnt++;
        }
    }
    cout << cnt << endl;

}