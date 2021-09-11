/*
 * Directed by: Ahmed Salah
 * */


#include <bits/stdc++.h>
#define kill return 0
#define space " "
#define endl '\n'
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define STREAM_IO
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef string str;
typedef bitset<1000000010> bs;
typedef vector<int> vi;
typedef map<int, int> mii;

/// Bit_manipulation Operations
#define isOn(S, j) (S & (1 << j))
#define setBit(S, j) (S |= (1 << j))
#define clearBit(S, j) (S &= ~(1 << j))
#define toggleBit(S, j) (S ^= (1 << j))
#define lowBit(S) (S & (-S))
#define setAll(S, n) (S = (1 << n) - 1)

#define modulo(S, N) ((S) & (N - 1))         // returns S % N, where N is a power of 2
#define isPowerOfTwo(S) (!(S & (S - 1)))
#define nearestPowerOfTwo(S) ((int)pow(2.0, (int)((log((double)S) / log(2.0)) + 0.5)))
#define turnOffLastBit(S) ((S) & (S - 1))   // turn off last 1 bit from right
#define turnOnLastZero(S) ((S) | (S + 1))   //turn on last 0 bit from right
#define turnOffLastConsecutiveBits(S) ((S) & (S + 1))
#define turnOnLastConsecutiveZeroes(S) ((S) | (S - 1))

/*void printSet(int vS){             // in binary representation
    printf("S = %2d = ", vS);
    stack<int> st;
    while (vS)
        st.push(vS % 2), vS /= 2;
    while (!st.empty())             // to reverse the print order
        printf("%d", st.top()), st.pop();
    printf("\n");
}*/
//////////////////////////////////////////////////////////


int main(){
    IO;
    int l, n;
    cin >> l >> n;
    while (l && n){
        int x, r;

        vector<pair<int, int> > intervals;
        for (int i = 0; i < n; ++i) {
            cin >> x >> r;

            int t1 = max(0, x-r);
            int t2 = min(l, x+r);

            intervals.push_back(make_pair(t1, t2));
        }
        sort(intervals.begin(), intervals.end());

        int start = 0,
            i = 0,
            cnt = 0;
        while (start < l) {
            int best = start;

            while (i < n && intervals[i].first <= start) {
                best = max(best, intervals[i].second);
                i++;
            }

            if (best == start)
                break;

            start = best;

            cnt++;
        }
        if (start < l)
            cout << -1 << endl;
        else
            cout << n - cnt << endl;

        cin >> l >> n;
    }
    kill;
}
