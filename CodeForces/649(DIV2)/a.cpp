#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int getlength(int*ar,int n,int x){
    int* prefix = new int[n];
    prefix[0]=ar[0];
    for(int i=1;i<n;i++){
        prefix[i] = ar[i]+prefix[i-1];
    }
    int largest = -1;
    for(int i=0;i<n;i++){
        if(prefix[i]%x == 0){
            int j=0;
            int sum =0 ;
            while(j<=i){
                sum  = prefix[i]-prefix[j];
                if(sum%x!=0){
                    if(largest < (i-j)){
                        largest = (i-j);
                        break;
                    }
                }
                j++;
            }
        }else{
            if(largest < (i+1)){
                largest = (i+1);
            }
        }
    }
    return largest;
}
int main(void){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int* ar = new int[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        int ans = getlength(ar,n,x);
        cout<<ans<<endl;
    }
    return 0;
}