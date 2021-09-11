#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cmath>
typedef unsigned long long ull;
using namespace std;
int main() {
    vector<string> v;
    int t, cnt = 0;
    cin >> t;
    string s;
    while (t){
        cin >> s;
        if (s.find('X') == string::npos){
            cout << 0 << endl;
            t--;
            continue;
        }
        else{
            if (s.find('X') != string::npos){
                cnt++;
                v.push_back("1x12 ");
            }
            for (int i = 0; i < 6; ++i) {
                if (s[i] == 'X' && s[i+6] == 'X'){
                    cnt++;
                    v.push_back("2x6 ");
                    break;
                }
            }
            for (int i = 0; i < 4; ++i) {
                if (s[i] == 'X' && s[i+4] == 'X' && s[i+8] == 'X'){
                    cnt++;
                    v.push_back("3x4 ");
                    break;
                }
            }
            for (int i = 0; i < 3; ++i) {
                if (s[i] == 'X' && s[i+3] == 'X' && s[i+6] == 'X' && s[i+9] == 'X'){
                    cnt++;
                    v.push_back("4x3 ");
                    break;
                }
            }
            for (int i = 0; i < 2; ++i) {
                if (s[i] == 'X' && s[i+2] == 'X' && s[i+4] == 'X' && s[i+6] == 'X' && s[i+8] == 'X'
                    && s[i+10] == 'X'){
                    cnt++;
                    v.push_back("6x2 ");
                    break;
                }
            }
            if (s.find('O') == string::npos){
                cnt++;
                v.push_back("12x1");
            }
            cout << cnt << " ";
            for (auto val : v){
                cout << val;
            }
            cout << endl;
            t--;
            cnt = 0;
            v.clear();
        }
    }
}