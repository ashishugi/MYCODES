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
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int t;
    cin>>t;
    while(t--){
        int n;
        int m;
        cin>>n>>m;
        int count=0;
        unordered_set<int> st1;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            st1.insert(temp);
        }
        for(int i=0;i<m;i++){
            int temp;
            cin>>temp;
            if(st1.find(temp) != st1.end()){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}