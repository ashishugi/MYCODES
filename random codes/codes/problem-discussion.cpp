#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll value(ll *ar , int n, ll k){
    ll small = ar[0] + k ;
    ll large = ar[n-1]-k;
    ar[0]+=k;
    ar[n-1]-=k;
    if(small  >  large){
        swap(small , large);
        swap(ar[0] , ar[n-1]);
    }
    for(int i=1;i<n-1;i++){
        ll  sub = ar[i] - k;
        ll add = ar[i]  + k;
        if(sub < small  && add > large){
            if(large -  sub < add - small){
                small = sub;
            }
            else{
                large = add;
            }
        }
    }
    return min(ar[n-1] - ar[0],large - small);
}
int main(void){
    int n;
    cin>>n;
    ll k;
    cin>>k;
    ll *ar = new ll[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    sort(ar,ar+n);
    ll minimum = value(ar , n, k);
    cout<<minimum<<endl;
}