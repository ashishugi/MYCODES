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
int selectActivity(vector<pair<int,int>>& ar){
    sort(ar.begin(),ar.end());
    int len = ar.size();
    int* dp = new int[len+1];
    loop(i,0,len+1){
        dp[i] = 0;
    }
    for(int i=0;i<ar.size();i++){
        pair<int,int > curr = ar[i];
        int temp_count =0;
        for(int j=i-1;j>=0;j--){
            if(ar[j].second <= curr.first){
                temp_count = max(temp_count,dp[j]);
            }
        }
       dp[i] = temp_count+1;
    }
    return *max_element(dp,dp+len+1);
}
bool compare(const pair<int,int>& a ,const pair<int,int>& b){
    return (a.second < b.second);
}
int greedy(vector<pair<int,int>>& ar){
    int len = ar.size();
    sort(ar.begin(),ar.end(),compare);
    pair<int,int> curr = ar[0];
    int count=1;
    for(int i=1;i<len;i++){
        if(curr.second <= ar[i].first){
            curr = ar[i];
            count++;
        }
    }
    return count;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<pair<int,int>> ar;
    loop(i,0,n){
        pair<int,int> temp;
        cin>>temp.first;
        cin>>temp.second;
        ar.pb(temp);
    }
    // int res  = selectActivity(ar);
    int res = greedy(ar);
    cout<<res<<endl;
    return 0;
}