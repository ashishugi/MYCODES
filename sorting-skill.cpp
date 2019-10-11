#include<iostream>
using namespace std;
bool sorted(int ar[],int n){
    for(int i=0;i<n-1;i++){
        if(ar[i]>ar[i+1]){
            return false;
        }
    }
    return true;
}
bool sort(int ar[],int n){
 for(int i=0;i<n-1;i++){
      if(ar[i+1]+1 == ar[i]){
         swap(ar[i],ar[i+1]);
     }
  
 }
 if(sorted(ar,n)){
 return true;
 }
 else{
     return false;
 }
 
}
int main(void){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        int ar[n];
        for(int i=0;i<n;i++){
            cin >>ar[i];
        }
        bool ans = sort(ar , n );
        if(ans){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}