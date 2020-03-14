#include<bits/stdc++.h>
using namespace std;
int odd(int n){
    if(n==1){
        return 0;
    }
    return 2+odd(n-1);
}
int even(int n){
    return n-1;
}
int main(void){
    int n;
    cin>>n;
    if(n%2==0){
        cout<<even(n/2)<<endl;
    }
    else{
        cout<<odd(n/2+1)<<endl;
    }
    return 0;
}