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
int maxSum(vector<int>& ar){
    int len  = ar.size();
    int sum =INT_MIN;
    for(int i=0;i<len;i++){
        int temp_sum =0;
        for(int j=i;j<len;j++){
            temp_sum+=ar[j];
            sum = max(sum,temp_sum);
        }   
    }
    return sum;
}
int maxSum1(vector<int>& ar){
    int len = ar.size();
    int temp,sum;
    temp = sum = ar[0];
    for(int i=1;i<len;i++){
        temp = max(temp+ar[i] , ar[i]);
        sum = max(sum , temp);
    }
    return sum;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> ar(n,0);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int ans = maxSum1(ar);
    cout<<ans<<endl;
    return 0;
}