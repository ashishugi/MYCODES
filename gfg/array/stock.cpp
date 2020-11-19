#include<bits/stdc++.h>
#include<vector>
#include<utility>
#include<set>
#include<stack>
#include<unordered_map>
#include<unordered_set>
typedef long long ll;
#define mod 1000000007
#define pb push_back
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
int getans(int* ar ,int n,int index,int status,int prev){
    if(index >= n){
        return 0;
    }
    int ans =0 ;
    if(status == 0){
        return max(getans(ar,n,index+1,1,ar[index]) , getans(ar,n,index+1,0,prev)); // take , not take
    }else if(status == 1){
        int ans1 = ar[index] - prev+getans(ar,n,index+1,0,0);
        int ans2 = getans(ar,n,index+1,1,prev);
        ans += max(ans1,ans2);
        return ans;
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int* ar = new int[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int ans = getans(ar,n,0,0,0);
    cout<<ans<<endl;
    return 0;
}