#include<bits/stdc++.h>
using namespace std;
int choco(int *ar ,int n){
    int *output =  new int[n+1];
    output[0] =1;
    for(int i=1;i<n;i++){ // ---> left to right
        if(ar[i] > ar[i-1]){
            output[i] = output[i-1]+1;
        }
        else{
            output[i] = 1;
        }
    }
    for(int i=n-2;i>=0;i--){ // ---> right to left
        if(ar[i] > ar[i+1] && && output[i] <= output[i+1]){
            output[i] = output[i+1]+1;
        }
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=output[i];
    }
        
    return sum;
}

int main(void){
    int n;
    cin>>n;
    int *ar =new int[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int res = choco(ar,n);
  //  cout<<endl;
    cout<<res<<endl;
}