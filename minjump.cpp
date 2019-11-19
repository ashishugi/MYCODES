#include<bits/stdc++.h>
using namespace std;
int jump(int *ar , int n){
    if(n==1){
        return 1;
    }
    if(n<=0){
        return INT_MAX;
    }
    int range = ar[0];
    int ans;
    for(int i=1;i<range;i++){
        int ans1 = 1+jump(ar+i,n-i);
         int ans2;
        if(i+1 <= range){
         ans2 = 1+jump(ar+(i+1) , n-i);
        }
        ans  = min(ans1 ,ans2);
         cout<<ans1 << "  "<<ans2<< " " <<ans<<endl;
        return ans;
       
    }
}
int main(void){
    int n;
    cin>>n;
    int *ar = new int[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int answer = jump(ar,n);
    cout<<answer<<endl;
}