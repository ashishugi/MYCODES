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
bool compare(const pair<int,int> &a,const pair<int,int> &b){
    if(a.first == b.first){
        return a.second  > b.second;
    }
    return a.first < b.first;
}
int getAns(vector<pair<int,int>> &ar,int power){
    int count=0;
    for(int i=0;i<ar.size();i++){
        // cout<< " power :  "<<power<< " moster power :  " << ar[i].first<<endl;        
        if(power - ar[i].first < 0){
            break;
        }else{
            count++;
            power = power + ar[i].second;
        }
    }
    return count;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int e;
    cin>>e;
    vector<pair<int,int>> ar(n); // power , bonus
    for(int i=0;i<n;i++){
        cin>>ar[i].first;
    }
    for(int i=0;i<n;i++){
        cin>>ar[i].second;
    }
    sort(ar.begin(),ar.end(),compare);
    int res = getAns(ar,e);
    cout<<res<<endl;
    return 0;
}