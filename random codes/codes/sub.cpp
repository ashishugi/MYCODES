#include<bits/stdc++.h>
//If amount of data to input is unknown then 
// while (cin >> x){ code }
// size 10, initial value 5 -> vector<int> v(10, 5);
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int* ar = new int[n];
    loop(i,0,n){
        cin>>ar[i];
    }
    int maxLen = getLen(ar,n);
    return 0;
}