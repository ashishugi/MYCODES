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
vector<vector<int>> res;
void getPath(int* ar,int n,int pre_value,int target,vector<int>& v){
    if(target == pre_value){
        res.pb(v);
        return;
    }
    if(target < pre_value || n==0){
        return;
    }
    if(pre_value*ar[0] <= target){
        v.pb(ar[0]);
        getPath(ar,n,pre_value*ar[0],target,v);
        v.pop_back();
    }
    getPath(ar+1,n-1,pre_value,target,v);
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int target,n;
    cin>>target>>n;
    int* ar = new int[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    sort(ar,ar+n);
    vector<int> v;
    v.pb(1);
    getPath(ar,n,1,target,v);
    if(res.size() == 0){
        cout<<(-1)<<endl;
    }else{
        vector<vector<int>> ans;
        int sol = INT_MAX;
        for(int i=0;i<res.size();i++){
            if(sol > res[i].size()){
                sol = res[i].size();
            }
        }
        for(int i=0;i<res.size();i++){
            if(res[i].size() == sol){
                ans.pb(res[i]);
            }
        }
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans[0].size();i++){
            cout<<ans[0][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}