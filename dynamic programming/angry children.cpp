#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{    
    int n;
    int k;
    cin>>n>>k;
    ll *ar = new ll[n+1];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    sort(ar,ar+n);
    
    ll sum=ar[0];
    ll target=0; 
    for(int i=1;i<k;i++){
        target=target+(i*ar[i])-sum;
        sum+=ar[i]; 
    }
    ll ans=target; 
    for(int i=k;i<n;i++){ 
        sum=sum-ar[i-k];
        ll newTarget=target-(2*sum)+((k-1)*(ar[i]+ar[i-k]));
        ans=min(ans,newTarget);
        target=newTarget; 
        sum=sum+ar[i]; 
    } 
    cout<<ans<<endl;
    return 0;
}
