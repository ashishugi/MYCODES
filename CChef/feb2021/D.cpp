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
int getAns(vector<pair<int,int>>& ar){
    bool flag = false;
    vector<int> position(ar.size(),0);
    for(int i=0;i<n;i++){
        position[i] = i;
    }
    int count=0;
    while(!flag){
        bool flag2 = false;
        for(int i=0;i<ar.size();i++){
            for(int j=i+1;j<ar.size();j++){
                if(ar[i].first > ar[j].first || position[i] <= position[j]){
                    position[i] += ar[i].second;
                    count++;
                    flag2 = true;
                    break;
                }
            }
            if(flag2 == false){
                break;
            }
        }
        if(flag2 == false){
            flag = true;
            break;
        }
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>> ar(n); // weight , distance jump;
        for(int i=0;i<n;i++){
            cin>>ar[i].first;
        }
        for(int i=0;i<n;i++){
            cin>>ar[i].second;
        }
        int res = getAns(ar);
        cout<<res<<endl;
    }
    return 0;
}