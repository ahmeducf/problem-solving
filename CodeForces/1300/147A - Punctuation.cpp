#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cmath>
typedef unsigned long long ull;
using namespace std;
int main() {
    string str;
    getline(cin, str);
    bool flag = false;
    for (auto i = str.begin(); i != str.end(); ++i) {
        if (*i == ' '){
            if(*(i-1) == ' '){
                i = str.erase(i-1, i);
            }
            if (*(i+1) == '.' || *(i+1) == ',' || *(i+1) == '!' || *(i+1) == '?'){
                i = str.erase(i, i+1);
            }
        }
        if (*(i) == '.' || *(i) == ',' || *(i) == '!' || *(i) == '?'){
            i = str.insert(i+1, ' ');
        }
    }
    cout << str;
    return 0;
}