#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define MAX 10000003
int* sieve(){
    int ar[MAX+1];
    for(int i=1;i<=MAX;i++){
        ar[i] = 0; 
    }
    for(int i=2;i<=100;i++){
        if(ar[i]==0){
             for(int j=i*i*i;j<=MAX;j+=i*i*i){
                ar[j] = -1;
            }
        }
    }
    int* res = new int[MAX];
    int count=1;
    for(int i=1;i<=MAX;i++){
        if(ar[i]!=-1){
           res[i] = count;
             count++;
        }else{
            res[i]=-1;
        }
    }
    return res;
}

int main(){
    int t;
    cin>>t;
    int* pos = sieve();
    // for(int i=1;i<17;i++){
    //     cout<<pos[i]<< " ";
    // }
    // cout<<endl;
    for(int i=0;i<t;i++){
        int num;
        cin>>num;
        int ans = pos[num];
        if(ans!=-1){
            cout<<"Case "<<i+1<<": "<<ans<<endl;
        }else{
            cout<<"Case "<<i+1<<": "<<"Not Cube Free"<<endl;
        }
    }
}