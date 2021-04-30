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
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_map<int,int> mp;
        vector<int> ar(n,0);
        for(int i=0;i<n;i++){
            cin>>ar[i];
            mp[ar[i]]++;
        }
        int maxfreq=0;
        int value=0;
        for(auto x : mp){
            if(maxfreq < x.second){
                maxfreq = x.second;
                value = x.first;
            }
        }
        int maxdiff =0;
        int maxdiffval=0;
        int count=0;
        for(int i=0;i<n;i++){
            if(ar[i]!=value){
                count+=abs(ar[i]-value);
                if(abs(ar[i] - value) > maxdiff){
                    maxdiff = abs(ar[i]-value);
                    maxdiffval = ar[i];
                }
            }
        }
        count = count - (abs(maxdiffval - value));
        cout<<count<<endl;

    }
    return 0;
}