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
void dfs(vector<pair<int,bool>>& ar,vector<vector<int>>& res,int start,int n){
    ar[start].second = true;
    for(int i=0;i<n;i++){
        if(ar[i].second == false && ar[start].first != ar[i].first){
            vector<int> temp;
            temp.push_back(start);
            temp.push_back(i);
            res.push_back(temp);
            dfs(ar,res,i,n);
        }
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,bool>> ar(n);
        for(int i=0;i<n;i++){
            cin>>ar[i].first;
            ar[i].second = false;
        }
        vector<vector<int>> res;
        for(int i=0;i<n;i++){
            if(!ar[i].second){
                dfs(ar,res,i,n);
            }
        }
        if(res.size() == n-1){
                cout<<"YES"<<endl;
                for(auto x : res){
                    for(auto y : x){
                        cout<<(y+1)<< " ";
                    }
                cout<<endl;
            }
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}