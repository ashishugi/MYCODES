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
bool knapsack(ll* weight,int size,int index,vector<ll>& res,ll half,ll W,ll sum){
    if(index >= size){
        return false;
    }
    cout<<index<< " -- "<<sum<<endl;
    if(sum>W || W<0){
        return false;
    }
    if(sum>= half && sum<=W){
        cout<<"here at result"<<endl;
        return true;
    }
    bool ans1 = knapsack(weight,size,index+1,res,half,W,sum);                   // not taken
    if(ans1){
        return true;
    }
    bool ans2 = false;
    cout<<"here at "<<W<<  " " <<weight[index]<<endl;
    res.push_back(weight[index]);
    ans2 = knapsack(weight,size,index+1,res,half,W,sum+weight[index]);
    if(ans2){
        return true;
    }
    res.pop_back();
    return false;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll W;
        cin>>W;
        ll* weight = new ll[n];
        for(int i=0;i<n;i++){
            cin>>weight[i];
        }
        vector<ll> res;
        bool ans = knapsack(weight,n,0,res,W/2,W,0);
        cout<<ans<<endl;
        for(auto x : res){
            cout<<x<< " ";
        }
        cout<<endl;
    }
    return 0;
}