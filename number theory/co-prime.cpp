#include<bits/stdc++.h>
using namespace std;
#define MAX 10001
int ar[MAX];
void sieve(){
    for(int i=0;i<MAX;i++){
        ar[i] = i;
    }
    for(int i=2;i<MAX;i++){
        if(ar[i] == i){
            ar[i] = i-1;            // for the prime
            for(int j=i*2;j<MAX;j+=i){
                ar[j] = (ar[j]*(i-1))/i;
            }
        }
    }
    for(int i=0;i<=15;i++){
        cout<<ar[i]<< " ";
    }
}
int main(void){
    int t;
    cin>>t;
    sieve();
    while(t--){
        int n;
        cin>>n;
        cout<<ar[n]<<endl;
    }
}