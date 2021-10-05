/*
 * Directed by: Ahmed Salah
 * */

#include <bits/stdc++.h>

#define kill return 0
#define space " "
#define MOD 1000000007
#define PI  3.14159265358979323846
#define endl '\n'
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std;
typedef long long ll;
typedef unsigned long long ull;

bool is_beautiful(string num) {
    int ones = 0;
    for (int i = 0; i < num.length(); ++i) {
        if (num[i] == '0')
            continue;
        else if (num[i] == '1') {
            ones++;
            if (ones > 1) return false;
        }
        else {
            return false;
        }
    }
    return true;
}
int main () {
    IO;
    #ifdef LOCAL_MACHINE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    //    freopen("input.in", "r", stdin);
    int n; cin >> n;
    string num;
    int zeroes = 0;
    string nonB;
    for (int i = 0; i < n; ++i) {
        cin >> num;
        if (num == "0"){
            cout << "0" << endl;
            kill;
        }
        if (is_beautiful(num)) {
            zeroes += num.size()-1;
        }
        else {
            nonB = num;
        }
    }

    if (nonB.empty()){
        cout << "1";
    }
    else {
        cout << nonB;
    }

    while (zeroes--){
        cout << "0";
    }
    cout << endl;
    kill;
}