#include<iostream>
using namespace std;
int main(void){
    int n;
    cin >> n;
    int ans;
    for(int i=0;i<n;i++){
       ans  = n & (1<<i);
        if(ans){
            break;
        }
    }
    cout<<ans<<endl;
}