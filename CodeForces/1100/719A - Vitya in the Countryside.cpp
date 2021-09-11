#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cmath>
typedef unsigned long long ull;
using namespace std;

int main() {
    int n, m;
    cin >> n;
    if (n == 1){
        cin >> m;
        if (m == 0){
            cout << "UP" << endl;
            return 0;
        } else if (m == 15){
            cout << "DOWN" << endl;
            return 0;
        } else{
            cout << -1 << endl;
            return 0;
        }
    }
    int arr[n];
    while (n){
        cin >> arr[n-1];
        n--;
    }
    if (arr[0] == 0){
        cout << "UP" << endl;
    } else if (arr[0] == 15){
        cout << "DOWN" << endl;
    } else{
        if (arr[0] > arr[1]){
            cout << "UP" << endl;
        } else{
            cout << "DOWN" << endl;
        }
    }
}