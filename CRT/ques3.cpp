#include<bits/stdc++.h>
using namespace std;
int even_series(int n){
    if(n==1){
        return 1;
    }
    return 3*even_series(n-1);
}
int odd(int n){
    if(n==1){
        return 1;
    }
    return 2*odd(n-1);
}
int main(void){
    int n;
    cin>>n;
    if(n%2==0){
        cout<<even_series(n/2)<<endl;
    }else{
        cout<<odd(n/2+1)<<endl;
    }
}