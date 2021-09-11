#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <vector>
 
using namespace std;
 
int main()
{
    int n, b, d, orngSize, x = 0;
    int juicer = 0;
    cin >> n >> b >> d;
    while(n--){
        cin >> orngSize;
        if(orngSize > b){
            continue;
        }
        else{
            if(juicer < d){
                juicer += orngSize;
                if(juicer > d){
                    juicer = 0;
                    x++;
                }
            }
            else{
                juicer = 0;
                x++;
            }
        }
    }
    cout << x << endl;
    return 0;
}