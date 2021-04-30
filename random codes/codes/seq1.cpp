#include<bits/stdc++.h>
using namespace std;
int sieve(int n){
    bool* ar = new bool[10001];
    for(int i=0;i<=10000;i++){
        ar[i] = true;
    }
    ar[1] = false;
    ar[0] = false;
    int limit = sqrt(10001);
    for(int i=2;i<=limit;i++){
        if(ar[i] == true){
            for(int j=i*i;j<=1000;j+=i){
                ar[j] =false;
            }
        }
    }
    int* res= new int[10001];
    for(int i=0,j=0;i<=10000;i++){
        if(ar[i]==true){
            res[j] = i;
            j++;
        }
    }
    return res[n-1];
}
int fib(int n){
    if(n==1 || n==0){
        return n;
    }
    return fib(n-1)+fib(n-2);
}
int main(void){
    int n;
    cin>>n;
        if(n%2==0){
            cout<<sieve(floor(n+1)/2)<<endl;
        }else{
            cout<<fib(floor(n+1)/2)<<endl;
        }
}