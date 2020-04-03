#include<bits/stdc++.h>
#define loop(i,n) for(int i=0;i<n;i++)
typedef long long ll;
#define m 1000000007
using namespace std;
ll getnum(ll x){
   ll count=0;
   for(ll i=-x;i<=x;i++){
       for(ll j=-x;j<=x;j++){
           if(i*i+j*j == x){
               cout<<i<< " "<<j<<endl;
               count = (count%m+1%m)%m;
           }
       }
   }
   return count;
}
int main(void){
    int n;
    cin>>n;
    ll* ar = new ll[n];
    loop(i,n){
        cin>>ar[i];
    }
    ll  num=1;
    loop(i,n){
        num = num* ar[i];
    }
    ll ways = getnum(num);
    cout<<(ways)<<endl;
  return 0;
}