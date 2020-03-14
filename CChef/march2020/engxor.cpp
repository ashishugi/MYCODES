#include<bits/stdc++.h>
using namespace std;
#define loop(i,n) for(int i=0;i<n;i++)
int main(void){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        int* ar = new int[n];
        loop(i,n){
            cin>>ar[i];
        }
        while(q--){
            int p;
            cin>>p;
            loop(i,n){
                ar[i] = (p ^ ar[i]);
            }
            int counteve=0;
            int countodd=0;
           loop(i,n){
               int val = ar[i];
               int tempcount=0;
               for(int j=0;j<(32);j++){
                   if(val&(1<<j)){
                       tempcount++;
                   }
               }
               if(tempcount%2==0){
                   counteve++;
               }else{
                   countodd++;
               }
           }
           cout<<counteve<< " "<<countodd<<endl;
        }
    }
    return 0;
}