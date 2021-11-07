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
    int T; cin >> T;
    for (int t = 1; t <= T; t++) {
        int n, m, k; cin >> n >> m >> k;
        int arr[n];
        int freq[k+1];

        arr[0] = 1;
        arr[1] = 2;
        arr[2] = 3;
        for (int i = 3; i < n; i++)
            arr[i] = (arr[i - 1] + arr[i - 2] + arr[i - 3]) % m + 1;

        int cnt = 0, minSize = n;
        bool valid = false;
        memset(freq, 0, sizeof(freq));
        freq[0] = 1;

        for (int hi = 0, lo = 0; hi < n; hi++) {
            int val = arr[hi];

            if (val <= k) {
                if (freq[val] == 0)
                    cnt++;

                freq[val]++;
            }

            while (lo <= hi && cnt == k) {
                int val = arr[lo];
                valid = true;
                minSize = min(minSize, hi - lo + 1);

                if (val <= k && --freq[val] == 0)
                    cnt--;

                lo++;
            }
        }
        if (valid)
            printf("Case %d: %d\n", t, minSize);
        else
            printf("Case %d: sequence nai\n", t);

    }
    kill;
}