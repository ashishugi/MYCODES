#include<bits/stdc++.h>
using namespace std;
int grundy(int n){
    if(n==0){
        return 0;
    }
    int ans1 = grundy(n/2);
    int ans2 = grundy(n/3);
    int ans3 = grundy(n/6);
    int maximum = max(ans1,max(ans2,ans3));
    for(int i=0;i<=maximum+1;i++){
        if(i!=ans1 && i!=ans2 && i!=ans3){
            return i;
        }
    }
}
int main(){
    int n;
    cin>>n;
    cout<<grundy(n)<<endl;
    return 0;
}