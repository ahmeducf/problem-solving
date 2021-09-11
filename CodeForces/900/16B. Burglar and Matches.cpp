/*
 * Directed by: Ahmed Salah
 * */
#include <bits/stdc++.h>
#define kill return 0
#define space " "
#define endl '\n'
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef string str;
typedef vector<int> vi;
typedef vector<pair<int, int>> vii;

bool compare(const pair<int, int> &a, const pair<int, int> &b);
int main()
{
    IO;
    int n, m; cin >> n >> m;
    vii boxes;
    int a, b, res = 0;
    for (int i = 0; i < m ; i++){
        cin >> a >> b;
        boxes.push_back(make_pair(a, b));
    }

    sort(boxes.begin(), boxes.end(), compare);

    for (auto box : boxes){
        if (box.first > n){
            res += n * box.second;
            break;
        }
        else{
            res += box.first * box.second;
            n -= box.first;
        }
    }
    cout << res << endl;
    kill;
}

bool compare(const pair<int, int> &a, const pair<int, int> &b)
{
    return a.second > b.second;
}