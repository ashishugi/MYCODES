#include<bits/stdc++.h>
using namespace std;
int countfun(int ar[] , int n ,int k){
    int final_count=0;
    for(int i=0;i<(1<<n);i++){
        int sum =0 ;
        for(int j=0;j<n;j++){
            if(i&(1<<j)){
                sum+=ar[j];
            }
        }
        if(sum==k){
            final_count++;
        }
    }
    return final_count;
}
int main(void){
    int n;
    int ar[] ={2,5,4,3,1};
    int k;
    cin>>k;
    cout<<countfun(ar,5,k)<<endl;
}