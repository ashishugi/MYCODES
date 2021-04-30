#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    cout<<"enter the value of n for which the pattern is required"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        /// now loop for the space
        for(int j=1;j<=(n-i);j++){
            cout<<" ";
        }
        // now printing for the pattern
        for(int k=1;k<=i;k++){
            cout<<i<< " ";
        }
        cout<<endl;
    }
}