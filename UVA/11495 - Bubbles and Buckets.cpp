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

ull merge(int *arr, int l, int mid, int r){
    ull invSum = 0;

    int n1 = (mid - l) + 1,
        n2 = r - mid;

    int L[n1], R[n2];

    for (int i = 0; i < n1; ++i)
        L[i] = arr[l+i];
    for (int i = 0; i < n2; ++i)
        R[i] = arr[mid+1+i];

    int i = 0,
        j = 0,
        k = l;
    while (i < n1 && j < n2){
        if (L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        } else{
            arr[k] = R[j];
            j++;
            invSum += n1 - i;
        }
        k++;
    }

    while (i < n1){
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2){
        arr[k] = R[j];
        j++;
        k++;
    }

    return invSum;
}

ull merge_sort(int *arr, int l, int r){
    ull invSum = 0;
    if (l < r){
        int mid = (l + r) / 2;

        invSum += merge_sort(arr, l, mid);
        invSum += merge_sort(arr, mid+1, r);

        invSum += merge(arr, l, mid, r);
    }
    return invSum;
}
int main(){
    IO;
    int n;
    while (cin >> n && n != 0){
        int arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];

        ull invSum = merge_sort(arr, 0, n-1);

        if (invSum % 2)
            printf("Marcelo\n");
        else
            printf("Carlos\n");
    }
    kill;
}
