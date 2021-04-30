#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<int> ans;
int minsize=INT_MAX;
void getAns(vector<int>& ar,int index,int sum,int target,vector<int>& sol){
    if(target == sum){
       if(sol.size() < minsize){
           ans.clear();
           ans = (sol);
           minsize = sol.size();
       } 
       return;
    }
    if(index >= ar.size() || sum>target){
        return;
    }
    sol.push_back(ar[index]);
    getAns(ar,index+1,sum+ar[index],target,sol);
    sol.pop_back();
    getAns(ar,index+1,sum,target,sol);
}
int main(void){
    int n;
    cin>>n;
    vector<int> ar(n,0);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int target;
    cin>>target;
    vector<int> sol;
    getAns(ar,0,0,target,sol);
    if(ans.size() > 0){
        for(auto x  : ans){
            cout<<x<< " ";
        }
    }else{
        cout<<"Not possible";
    }
    cout<<endl;
    return 0;
}