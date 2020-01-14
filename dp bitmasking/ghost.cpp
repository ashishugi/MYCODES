#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef long long ll;
bool getnumber(int i,int n,int mask){
//  cout<<"for "<<i<<endl;
    for(int j=1;j<=n;j++){
      //  cout<<i<<"  "<<j<<endl;
        if((i&j==i) && (mask&(1<<j))){
          cout<<i<<" and "<<j<<endl;
          return false;
        }
    }
    return true;
}
int cal(int n,int mask){
    int ans =0 ;
    if(mask==((1<<n))){
    //   cout<<"mask "<<mask<<endl;
       return 1;
    }
    for(int i=1;i<=n;i++){
        if(!(mask&(1<<i))){
          bool sol=getnumber(i,n,mask);
                if(sol){
                      ans=ans+1+cal(n,mask|(1<<i));
                      // cout<<ans<<endl;
            }else{
              return 0;
            }
        }
    }
    return ans;
}
int main(void){
    int n;
    cin>>n;
    int mask=0;
    cout<<cal(n,0)<<endl;
}
