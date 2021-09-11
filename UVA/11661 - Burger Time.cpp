#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
typedef unsigned long long ull;
using namespace std;
int main() {
    int l, cnt = INT32_MAX;
    string s;
    while (cin >> l && l){
        cin >> s;
        auto pos = s.find('Z');
        if (pos != string::npos){
            cout << 0 << endl;
            continue;
        } else{
            pos = s.find_first_of("RD");
            char c = s[pos];
            int j = pos;
            for (int i = pos+1; i < s.size(); ++i) {
                if (c != s[i] && s[i] != '.'){
                    cnt = min(cnt, i-j);
                    j = i;
                    c = s[i];
                } else if (c == s[i]){
                    j = i;
                }
            }
        }
        cout << cnt << endl;
        cnt = INT32_MAX;
    }
    return 0;
}