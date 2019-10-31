#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    sort(ar , ar+n , greater <int> ());
    long long sum = 0;
    for(int i=0;i<n;i++){
        cout<<ar[i]<< " ";
    }
    for(int i=0;i<n;i++){
        sum = sum+(ar[i]*pow(2,i));
    }
    cout<<endl;
    cout<<sum<<endl;
}