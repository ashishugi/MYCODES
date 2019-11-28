#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
bool check(int num){
    while(num!=0){
        int x = num%10;
        if(x!=2 || x!=5){
            return false;
        }
        num = num/10;
    }
    return true;
}
ll find(int num ,int *ar){
    ll min = num;
    ll max = 1000;
    ll  ans=0;
    while(min<=max){
        int mid = (min+max)/2;
        if(ar[mid] >= num ){
            ans = mid;
            max = mid-1;
        }
        else{
            min = mid+1;
        }
       // cout<<min <<  " "<<mid<< " "<<max<< " "<<ans<<endl;
    }
    return ans;
}
int main(void){
    int t;
    cin>>t;
    int *ar = new int[10000];
    int j=0;
    for(int i=2;i<=1000;i++){
        cout<<check(i)<<endl;
        if(check(i)){
            ar[j] = i;
            j++;
        }
    }
   for(int i=0;i<j;i++){
       cout<<ar[i]<< " ";
    }
       while(t--){
        ll l,r;
        cin>>l>>r;
        ll sum=0;
        for(int i=l;i<=r;i++){
            sum+=find(i ,ar);
        }
        cout<<sum<<endl;
    }

}