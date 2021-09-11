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
    int k = n;

    vector<int> arr;
    while (n){
        int i;
        cin >> i;
        arr.push_back(i);
        n--;
    }
    sort(arr.begin(), arr.end());
    if (arr[0] == 1){
        cout << -1 << endl;
    } else{
        cout << 1 << endl;
    }
}