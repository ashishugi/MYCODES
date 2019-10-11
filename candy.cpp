#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool check(int ar[],int mid,int n,int k){
    int count=0;
    for(int i=0;i<n;i++){
        count = count +(int)ar[i]/mid;
        if(count>k){
            return true;
        }
    }
    return false;
}
int main(void){
    int t;
    cin>>t;
    while(t--){
        int n , k;
        cin >> n >> k;
        int *ar = new int[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        sort(ar,ar+n);
        int ans =0;
        int min = 0;
        int max = ar[n-1];
        while(min<=max){
            int mid = (min+max)/2;
           if(check(ar,mid,n,k)){
               min = mid+1;
               ans = mid;
           }
           else{
               max = mid-1;
           }
        }
        cout<<ans<<endl;

    }
}