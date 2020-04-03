#include<bits/stdc++.h>
#define loop(i,n) for(int i=0;i<n;i++)
using namespace std;
int main(void){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count=0,maxcount=0;
        for(int i=0;i<32;i++){
            if(n&(1<<i)){
                count++;
            }else{
                if(maxcount <  count){
                    maxcount = count;
                    count=0;
                }
            }
        }
        cout<<(maxcount+1)<<endl;
    }
  return 0;
}