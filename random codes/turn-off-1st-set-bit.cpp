#include<iostream>
using namespace std;
int main(void){
    int n;
    cin >> n;
    int ans;
    int i;
    for( i=0;i<n;i++){
       ans  = n & (1<<i);
        if(ans){

            break;
        }
    }
      ans  = n & (~(1<<i));
    cout<<ans<<endl;
}