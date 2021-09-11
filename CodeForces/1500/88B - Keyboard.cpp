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


struct Shift { int x; int y; };

struct Pos { int x; int y; };
vector<Pos> letters[26];
vector<Shift> shifts;

int distance(int x1, int y1, int x2, int y2) {
    int x = x1 - x2;
    int y = y1 - y2;
    return x * x + y * y;
}

int smallestDistance(char c, vector<Pos> letter, vector<Shift> shifts) {
    int minDistance = INT32_MAX;
    for (int i = 0; i < letter.size(); i++) {
        for (int j = 0; j < shifts.size(); j++) {
            minDistance = min(minDistance, distance(letter[i].x, letter[i].y, shifts[j].x, shifts[j].y));
        }
    }
    return minDistance;
}

int main () {
    IO;
    //    freopen("infile.txt", "r", stdin);
    //    freopen("outfile.txt", "w", stdout);
    auto start = std::chrono::high_resolution_clock::now();
    ///
    int n, m, x;
    cin >> n >> m >> x;

    char c;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> c;
            if (c == 'S')
                shifts.push_back({i, j});
            else
                letters[c - 'a'].push_back({i, j});
        }
    }

    int q; cin >> q;
    string text; cin >> text;
    int ans = 0; int arr[26];
    memset(arr, -1, sizeof(arr));
    for (int i = 0; i < q; i++) {
        char cur = (char) tolower(text[i]);
        if (!letters[cur - 'a'].empty()) {
            if (isupper(text[i])) {
                if (!shifts.empty()) {
                    if (arr[cur - 'a'] == -1) {
                        int dist = smallestDistance(cur, letters[cur - 'a'], shifts);
                        if (dist > x * x) {
                            arr[cur - 'a'] = 0;
                            ans++;
                        }
                        else
                            arr[cur - 'a'] = 1;
                    }
                    else if (arr[cur - 'a'] == 0)
                        ans++;
                }
                else {
                    cout << -1 << endl;
                    kill;
                }
            }
        }
        else {
            cout << -1 << endl;
            kill;
        }
    }
    cout << ans << endl;

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