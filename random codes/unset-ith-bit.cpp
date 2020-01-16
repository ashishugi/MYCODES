#include<iostream>
using namespace std ; 
int main(void){
    int n;
    int i;
    cin >> n >> i;
    int ans = n & (~(1<<i));
    cout<<ans<<endl;
}
