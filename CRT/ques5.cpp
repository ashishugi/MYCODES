#include<bits/stdc++.h>
using namespace std;
int fib[86];
int fibo(int n){
    if(n==0 or n==1){
        fib[n]=1;
        return 1;
    }
    int ans=fibo(n-1)+fibo(n-2);
    fib[n]=ans;
    return ans;
}
int main(void){
    int n;
    cin>>n;
    int x=fibo(n);
    for(int i=0;i<n;i++){
        cout<<fib[i]<< " ";
    }
    cout<<"\n";
    return 0;
}