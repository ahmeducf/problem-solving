#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cmath>
typedef unsigned long long ull;
using namespace std;


int main() {
    int road[4][4];
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cin >> road[i][j];
        }
    }
    for (int i = 0; i < 4; ++i) {
        if (road[i][3] == 1){
            if (road[i][0] == 1 || road[i][1] == 1 || road[i][2] == 1){
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    if (road[0][3] == 1){
        if (road[1][0] == 1 || road[2][1] == 1 || road[3][2] == 1){
            cout << "YES" << endl;
            return 0;
        }
    } if (road[1][3] == 1){
        if (road[2][0] == 1 || road[3][1] == 1 || road[0][2] == 1){
            cout << "YES" << endl;
            return 0;
        }
    } if (road[2][3] == 1){
        if (road[3][0] == 1 || road[0][1] == 1 || road[1][2] == 1){
            cout << "YES" << endl;
            return 0;
        }
    } if (road[3][3] == 1){
        if (road[0][0] == 1 || road[1][1] == 1 || road[2][2] == 1){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

}