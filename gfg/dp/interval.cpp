#include<bits/stdc++.h>
#include<vector>
#include<utility>
#define loop(i,n) for(int i=0;i<n;i++)
using namespace std;
string  arrange(vector<pair<int,int>> &ar){
    int end_c = ar[0].second;
    int end_j = 0;
    string res = "C";
    int len = ar.size();
    for(int i=1;i<len;i++){
        if(ar[i].first>=end_c){
            res+='C';
            end_c = ar[i].second;
        }else if(ar[i].first >= end_j){
            res+='J';
            end_j = ar[i].second;
        }else{
            return "IMPOSSIBLE";
        }
    }
    return res;
}
string re(vector<pair<int,int>> &ar,vector<pair<int,int >> &ar1,string s){
    int i=0;
    int len =ar.size();
    string res(len,'a');
    vector<bool> index(len ,false);
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            if(index[j]==false && (ar[i].first == ar1[j].first) && (ar[i].second == ar1[j].second)){
                res[j] = s[i];
                index[j] = true;
                break;
            }
        }
    }
    return res;
}
int main(void){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n;
        cin>>n;
        vector<pair<int,int>> ar;
         vector<pair<int,int>> ar1;
        for(int i=0;i<n;i++){
            pair<int,int> p;
            cin>>p.first;
            cin>>p.second;
            ar.push_back(p);
            ar1.push_back(p);
        }
        sort(ar.begin(),ar.end());
        string res = arrange(ar);
        if(res=="IMPOSSIBLE"){
            cout<<"Case #"<<i<< ": "<<res<<endl;
        }else{
            string ans = re(ar,ar1,res);
            cout<<"Case #"<<i<< ": "<<ans<<endl;
        }
        string ans = re(ar,ar1,res);
        
    }
  return 0;
}