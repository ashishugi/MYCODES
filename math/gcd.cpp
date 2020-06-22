#include<bits/stdc++.h>
#define loop(i,n) for(int i=0;i<n;i++)
using namespace std;
int getnumber(int n){
    int count=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i%j==0 && i<=j){
                count++;
            }
        }
    }
    return count;
}
int main(void){
    int n;
    cin>>n;
    int ans = getnumber(n);
    cout<<ans<<endl;
  return 0;
}