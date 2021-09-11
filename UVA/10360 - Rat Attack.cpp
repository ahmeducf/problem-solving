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

int killed[1025][1025];

int main(){
    IO;
    int t; cin >> t;
    int d, n;

    int x, y, size, xl, xr, yl, yr;
    while (t--){
        cin >> d >> n;

        while (n--){
            cin >> x >> y >> size;
            xl = max(0, x-d), xr = min(1024, x+d);
            yl = max(0, y-d), yr = min(1024, y+d);

            for (int i = xl; i <= xr; ++i)
                for (int j = yl; j <= yr; ++j)
                    killed[i][j] += size;
        }

        int mx = -1, locX, locY;
        for(int i = 0; i < 1025; i++){
            for (int j = 0; j < 1025; ++j)
                if (killed[i][j] > mx){
                    mx = killed[i][j];
                    locX = i;
                    locY = j;
                }

        }

        cout << locX << " " << locY << " " << mx << endl;
        memset(killed, 0, sizeof killed);
    }

    kill;
}
