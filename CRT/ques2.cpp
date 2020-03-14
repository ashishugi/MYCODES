#include<bits/stdc++.h>
using namespace std;
int prime[10000];
void getprime(){
    bool* isprime=new bool[10000];
    for(int i=0;i<10000;i++){
        isprime[i]=true;
    }
    isprime[0]=false;
    isprime[1]=false;
    for(int i=2;i*i<10000;i++){
        if(isprime[i]){
            for(int j=i*i;j<10000;j+=i){
                isprime[j]=false;
            }
        }
    }
    
    for(int i=2,j=0;i<10000;i++){
        if(isprime[i]){
            prime[j]=i;
            j++;
        }
    }
}
int fib(int n){
    if(n==0 or n==1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}
int main(void){
    // odd - > fibbo
    // even -> prime
    int n;
    cin>>n;
    getprime();
    if(n%2==0){
        cout<<prime[(n/2)-1]<<endl;
    }else{
        cout<<fib((n/2)+1)<<endl;
    }

}