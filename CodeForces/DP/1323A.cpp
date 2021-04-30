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
        vector<int> ar(n,0);
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        vector<int>res;
        for(int i=0;i<ar.size();i++){
            if(ar[i]%2 == 0){
                res.push_back(i+1);
                break;
            }
            if(i>0 && (ar[i-1]+ar[i])%2== 0){
                res.push_back(i);
                res.push_back(i+1);
                break;
            }
        }
        if(res.size() == 0){
            cout<<(-1)<<endl;
        }else{
            cout<<res.size()<<endl;
            for(int x : res){
                cout<<x<< " ";
            }
            cout<<endl;
        }
    }
    return 0;
}