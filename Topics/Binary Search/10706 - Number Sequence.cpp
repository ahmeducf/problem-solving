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

const int N = 1e9+9;

ll ii;

string sequence; // store single sequence
int totalLength = 0; // length from 1 to n
vector<ll> lens(1,0); // cumulative length of concat seq


ll BS ()
{
    ll lo = 0, hi = 35000;
    ll mid;
    while (lo < hi){
        mid = lo + (hi - lo + 1)/2;
        if (lens[mid] < ii){
            lo = mid;
        }
        else {
            hi = mid - 1;
        }
    }
    return sequence[ii-lens[lo]-1] - '0';
}


int main () {
    IO;
#ifdef LOCAL_MACHINE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    //    freopen("input.in", "r", stdin);

    for(int i = 1; i < 35000; ++i){
        int length = (int)log10(i)+1;
        totalLength += length;
        sequence += to_string(i);
        lens.push_back(totalLength + lens.back());
    }

    int t;
    cin >> t;
    while(t--){
        cin >> ii;
        cout << BS() << endl;
    }
    kill;
}