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
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int* ar = new int[n];
        unordered_map<int,pair<int,vector<int> > > mp; // value , freq , index(vector);
        for(int i=0;i<n;i++){
            cin>>ar[i];
            mp[ar[i]].first+=1;
            mp[ar[i]].second.push_back(i);
        }
        int maxFreq=INT_MAX;
        int value=0;
        vector<int> res;
        for(auto x : mp){
            if(maxFreq > x.second.first){
                maxFreq = x.second.first;
                value = x.first;
                res = x.second.second;
            }
        }
        int count =0;
        if(res[0] >0){
            count++;
        }
        if(res[res.size()-1] != n-1){
            count++;
        }
        int val = ar[0];
        bool flag = false;
        if((ar[n-1] == val && mp[val].first==2) || (mp[val] == n) ){
            if((mp[val] == n)){
                cout<<0<<endl;
            }else{
                cout<<1<<endl;
            }
        }else{
            
        }
    }
    return 0;
}