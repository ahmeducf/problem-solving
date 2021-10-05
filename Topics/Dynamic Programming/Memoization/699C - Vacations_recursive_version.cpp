/*
 * Directed by: Ahmed Salah
 * */

#include <bits/stdc++.h>
#define kill return 0
#define space " "
#define endl '\n'
#define PI  3.14159265358979323846
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef bitset<1000000010> bs;
typedef vector<int> vi;
typedef map<int, int> mii;

int n;
vector<int> v(105);
int memo[105][3];

int countDaysOfRest (int i, int last){
    if (i > n) return 0;
    if (memo[i][last] != 1000) return memo[i][last];

    if (v[i] == 0){
        return memo[i][last] = 1 + countDaysOfRest(i+1, 0);
    }
    else if (v[i] == 1){
        if (last == 1)
            return memo[i][last] = 1 + countDaysOfRest(i+1, 0);
        else
            return memo[i][last] = countDaysOfRest(i+1, 1);
    }
    else if (v[i] == 2){
        if (last == 2)
            return memo[i][last] = 1 + countDaysOfRest(i+1, 0);
        else
            return memo[i][last] = countDaysOfRest(i+1, 2);

    }
    else if (v[i] == 3){
        int one = (last == 1) ? INT32_MAX : countDaysOfRest(i+1, 1);
        int two = (last == 2) ? INT32_MAX : countDaysOfRest(i+1, 2);
        return memo[i][last] = min(one, two);
    }
    return -1;
}

int main () {
    IO;
    //    freopen("infile.txt", "r", stdin);
    //    freopen("outfile.txt", "w", stdout);
    auto start = std::chrono::high_resolution_clock::now();
    ///
    cin >> n;

    for (int i = 0; i <= n; ++i)
        memo[i][0] = memo[i][1] = memo[i][2] = 1000;

    for (int i = 1; i <= n; ++i)
        cin >> v[i];

    cout << countDaysOfRest(1, 0);

    ///
    auto end = std::chrono::high_resolution_clock::now();
    //    #define EXECUTION_TIME
    #ifdef EXECUTION_TIME
    std::cerr << "Execution time: "
    << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count()
    << " ms" << endl;
    #endif
    kill;
}