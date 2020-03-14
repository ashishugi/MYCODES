#include<bits/stdc++.h>
using namespace std;
bool is_amsstrong(int n){
    int temp=n;
    int sum=0;
    while(n){
        int remainder=n%10;
        sum+=remainder*remainder*remainder;
        n=n/10;
    }
    cout<<sum<<endl;
    if(temp ==  sum){
        return true;
    }
    return false;
}
int main(void){
    int n;
    cin>>n;
    if(is_amsstrong(n)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}