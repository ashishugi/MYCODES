#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    cin>>n;
    int res=3;
    int d=7;
    n--;
    while(n--){
        res=res+d;
        d=d+4;
    }
    cout<<res<<endl;
}