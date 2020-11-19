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
/************************   O(n) Solution  ************************/
vector<int> getLeader(vector<int>& ar){
    int len = ar.size();
    int maximum = INT_MIN;
    vector<int> res;
    for(int i=len-1;i>=0;i--){
        if(ar[i] > maximum){
            res.pb(ar[i]);
            maximum = ar[i];
        }
    }
    return res;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> ar(n,0);
    loop(i,0,n){
        cin>>ar[i];
    }
    vector<int> leader = getLeader(ar);
    for(auto x  :  leader){
        cout<<x<< " ";
    }
    cout<<endl;
    return 0;
}