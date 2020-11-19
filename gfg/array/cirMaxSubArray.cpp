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
int circularSum(vector<int>& ar){ // O(n2)
    int len = ar.size();
    int sum= INT_MIN;
    for(int i=0;i<len;i++){
        int count =0;
        int j = i;
        int curr = 0;
        while(count < len){
            curr = max(ar[j]+curr,ar[j]);
            sum = max(sum,curr);
            j = (j+1)%len;
            count++;
        }
    }
    return sum;
}   
int circularSum1(vector<ll>& ar){
    int len = ar.size();
    ll sum1 = ar[0];
    ll curr = ar[0];
    for(int i=1;i<len;i++){
        curr = max(curr+ar[i],ar[i]);
        sum1 = max(sum1,curr);
    }
    ll total = 0;
    for(int i=0;i<len;i++){
        total+=ar[i];
    }
    ll minsum = ar[0];
    ll currmin = ar[0];
    for(int i=1;i<len;i++){
        currmin = min(currmin+ar[i],ar[i]);
        minsum = min(currmin,minsum);
    }
    ll sum2 = total-minsum;
    if(sum1 < 0){
        return sum1;
    }
    ll res = max(sum1,sum2);
    return res;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<ll> ar(n,0);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int sum = circularSum1(ar);
    cout<<sum<<endl;
    return 0;
}