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
bool  get(vector<int>& ar,int target){
    int len = ar.size();
    int sum =ar[0];
    int start =0;
    int end=0;
    for(;(start<=end && end<len);){
        if(sum == target){
            return true;
        }else if(sum < target){
            end++;
            sum+=ar[end];
        }else{
            sum-=ar[start];
            start++;
        }
    }
    return false;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int target;
    cin>>target;
    vector<int> ar(n,0);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    bool res= get(ar,target);
    cout<<res<<endl;
    return 0;
}