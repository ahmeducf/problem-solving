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

vector<vector<int>> v(100005);
bool compare (pair<int, int> pr1, pair<int, int> pr2) { return pr1.first < pr2.first; }

int main () {
    IO;
    #ifdef LOCAL_MACHINE
        freopen("../in.txt", "r", stdin);
        freopen("../out.txt", "w", stdout);
    #endif
//    freopen("input.in", "r", stdin);
    int n; cin >> n;
    int x;
    for (int i = 1; i <= n; ++i) {
        cin >> x;
        v[x].push_back(i);
    }

    vector<pair<int, int>> ans;
    for (int i = 0; i < v.size(); ++i) {
        bool flag = false;
        int sz = v[i].size();
        if (sz != 0){
            if (sz == 1){
                ans.push_back({i, 0});
            }
            else {
                int tmp = abs(v[i][1] - v[i][0]);
                for (int j = 2; j < sz; ++j) {
                    if (v[i][j] - v[i][j-1] != tmp){
                        flag = true;
                        break;
                    }
                }
                if (!flag) ans.push_back({i, tmp});
            }
        }
    }

    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); ++i) {
        cout << ans[i].first << " " << ans[i].second << endl;
    }

    kill;
}