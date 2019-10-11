#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    int k;
    cin>>n >>k;
    vector<int> ar(n,1);
    int counter = 0;
    for(int j=1;i<=(n+1)/k;j++){
        i =1;
    for(int i=1;i<=n;i++){
        if(ar[i]!=0){
            counter ++;
        }
        if(counter==k){
            start = i;
            ar[i]=0;
            counter= 0;
            
        }
    }
  }
}