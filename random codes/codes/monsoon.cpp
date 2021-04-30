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
int getAns(vector<int>& sizes,int index,int target){
    if(index >= sizes.size() || target<0){
        return 100001;
    }
    if(target == 0){
        return 0;
    }
    int ans1 = 1+getAns(sizes,index,target - sizes[index]);
    int ans2 = getAns(sizes,index+1,target);
    return min(ans1,ans2);
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> sizes(n,0);
    for(int i=0;i<n;i++){
        cin>>sizes[i];
    }
    int require;
    cin>>require;
    int res = getAns(sizes,0,require);
    if(res == 100001){
        cout<<-1<<endl;
    }else{
        cout<<res<<endl;
    }
    return 0;
}