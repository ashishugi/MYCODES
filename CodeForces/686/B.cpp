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
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,pair<int,int>> mp; // value , freq , index;
        int* ar = new int[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
            if(mp.find(ar[i]) != mp.end()){
                mp[ar[i]].first+=1;
            }else{
                mp[ar[i]].first+=1;
                mp[ar[i]].second = i+1;
            }
        }
        int index=-1;
        int value = INT_MAX;
        for(auto x : mp){
            if(x.second.first == 1 && value > x.first){
                index =x.second.second;
                value = x.first;
            }
        }
        cout<<index<<endl;

    }
    return 0;
}