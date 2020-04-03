#include<bits/stdc++.h>
#define loop(i,n) for(int i=0;i<n;i++)
using namespace std;
bool check(int* ar,int n){
    int previous=-1;
    for(int i=0;i<n;i++){
        if(ar[i]==1){
            previous=i;
            break;
        }
    }
    if(previous == -1){
        return true;
    }
    for(int i=previous+1;i<n;i++){
        if(ar[i]==1){
            if((i-previous)>=6){
                previous = i;
                continue;
            }else{
                return false;
            }
        }
    }
    return true;
}
int main(void){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int* ar = new int[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        if(check(ar,n)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
  return 0;
}