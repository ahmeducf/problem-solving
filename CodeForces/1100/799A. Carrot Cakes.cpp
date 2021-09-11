#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n,t,k,d;
    cin>>n>>t>>k>>d;
    if(k>n){
        cout<<"NO";
        return 0;
    }
    double x = ceil(n/k);
    if(x*t > d+t){
        cout<<"YES";
        return 0;
    }
    cout<<"No";
    return 0;
}