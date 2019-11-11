#include<bits/stdc++.h>
using namespace std;
int sub(int *ar , int n){
    int *output = new int[n+1];
    int count =0 ;
    count = n;
    output[0] = 1;
    for(int i=1;i<n;i++){
        output[i] = 1;
        int possible=0;
        for(int j = i-1;j>=0;--j){
            if(ar[i] > ar[j]){
                possible = output[j] + 1;
            }
            if(__gcd(ar[i], ar[j])==1){
                   count++;
            }
            if(possible > output[i]){
                output[i] = possible;
               
            }
        }
    }
    int max=0;
    for(int i=0;i<n;i++){
         if(max <  output[i]){
             max= output[i];
         }
    }

    delete [] output;
    return count;
}
int main(void){
    int n;
    cin>>n;
    int *ar = new int[n];
    for(int i=0;i<n;i++){
        cin >>ar[i];
    }
    int num = sub(ar  ,n);
    cout<<num<<endl;
}