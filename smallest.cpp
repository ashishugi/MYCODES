#include<bits/stdc++.h>
using namespace std;
void calculate(int *ar,int sum ,int n,vector<int>& output,int res){
    if(sum==res){
        return;
    }
    if(sum < res){
        return;
    }
    if(n<=0){
        return;
    }
    if(sum-ar[0]>=0){
        output.push_back(ar[0]);
        calculate(ar+1,sum,n-1,output,res*ar[0]);
        calculate(ar,sum,n-1,output,res*ar[0]);
    }
        calculate(ar,sum,n-1,output,res);
}
int main(void){
    int sum , n;
    cin>>sum;
    cin>>n;
    int *ar  = new int[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
   vector<int> output;
   int res=1;
    calculate(ar , sum , n,output,res);
    for(auto x:output){
        cout<<x<< " ";
    }
    cout<<endl;
}