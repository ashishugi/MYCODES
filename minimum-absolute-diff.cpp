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
    sort(ar,ar+n);
    int min=INT_MAX;
    for(int i=0;i<n-1;i++){
        if(min>abs(ar[i]-ar[i+1])){
            min = abs(ar[i]-ar[i+1]);
        }
    }
    cout << min << endl;
}
