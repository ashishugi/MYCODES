#include<bits/stdc++.h>
#define loop(i,n) for(int i=0;i<n;i++)
#include<vector>
#include<map>
using namespace std;
typedef long long ll;
ll cal(vector<int>& a){
    ll y=1;
    ll sum=0;
    for(auto it = a.rbegin();it!=a.rend();it++){
        ll val= y*(*it);
        sum+=val;
        y=y*10;
    }
    return sum;
}
ll getval(vector<int>& a,vector<int>& b,ll val){
    if(a.size()< b.size()){
        return -1;
    }
    // if(a.size()> b.size()){
    //     sort(a.begin(),a.end());
    //     ll ans = cal(a);
    //     return ans;
    // }
    sort(a.begin(),a.end());
    vector<int> ans = a;
    bool flag = false;
   int limit = 1;
   int final_ans=INT_MAX;
   for(int i=1;i<=a.size();i++){
       limit = limit*i;
   }
    for(int i=0;i<limit;i++){
        int  value = cal(a);
        if(val < value && value < final_ans){
            flag=true;
            final_ans = value;
        }
        next_permutation(a.begin(),a.end());
    }
    if(flag){
        return final_ans;
    }
    return -1;
}
int main(void){
    ll a,b;
    cin>>a>>b;
    vector<int> p;
    vector<int> q;
    ll val = b;
    while(a){
        int temp = a%10;
        p.push_back(temp);
        a=a/10;
    }
    while(b){
        int temp = b%10;
        q.push_back(temp);
        b=b/10;
    }
    reverse(p.begin(),p.end());
    reverse(q.begin(),q.end());
    ll ans = getval(p,q,val);
    if(ans == 0){
        cout<<-1<<endl;
    }else{
        cout<<ans<<endl;
    }
  return 0;
}