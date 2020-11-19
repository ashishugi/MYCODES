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
int getLIS(int* ar,int n,int pre_value){
    if(n==0){
        return 0;
    }
    int ans1 = 0;
    int ans2 =0 ;
    if(ar[0] > pre_value){
        ans1 = 1+getLIS(ar+1,n-1,ar[0]);
    }
    ans2 = getLIS(ar+1,n-1,pre_value);
    return max(ans1,ans2);
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int* ar = new int[n];
    loop(i,0,n){
        cin>>ar[i];
    }
    int ans =getLIS(ar,n,INT_MIN);
    cout<<ans<<endl;
    return 0;
}