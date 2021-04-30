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
int res=INT_MAX;
void getAns(vector<int>& h,int index,int k,int t1,int t2,int count1,int count2){
    if(index>=h.size()){
        return;
    }
    if(t1>=k && t2>=k){
        res = min(res,count1+count2);
        return;
    }else{
        if(t1<k){
            getAns(h,index+1,k,t1+h[index],t2,count1+1,count2); // included to first
        }
        if(t2<k){
            getAns(h,index+1,k,t1,t2+h[index],count1, count2+1); // included to second
        }
        getAns(h,index+1,k,t1,t2,count1,count2); // not include in any of the elements
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> h(n,0);
        for(int i=0;i<n;i++){
            cin>>h[i];
        }
        getAns(h,0,k,0,0,0,0);
        if(INT_MAX == res){
            cout<<-1<<endl;
        }else{
            cout<<res<<endl;
        }
    }
    return 0;
}