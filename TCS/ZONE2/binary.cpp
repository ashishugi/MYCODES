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
bool check(ll* ar,int n,int start,int end,int bitsrequired){
    ll numone=0;
    ll numzero=0;
    for(int i=start;i<=end;i++){
        ll currone = __builtin_popcount(ar[i]);
        ll currzero = bitsrequired - currone;
        numone+=currone;
        numzero+=currzero;
    }
    if(numone == numzero){
        return true;
    }
    return false;
}
void getBits(ll* ar,int n,int bitsrequired){
    int count =0;

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(check(ar,n,i,j,bitsrequired)){
                count++;
            }
        }
    }
    vector<int> res;
    int index =0;
    for (int i = 31; i >= 0; i--) {
        int k = count >> i;
        if (k & 1)
             res.pb(1);
        else
            res.pb(0);
    } 
    vector<int> ans(bitsrequired,0);
    index =0;
    for(int i = res.size()-1;i>=0 && bitsrequired;i--){
        ans[index] = res[i];
        bitsrequired--;
        index++;
    }
    reverse(ans.begin(),ans.end());
    for(auto x :ans){
        cout<<x;
    }
    cout<<endl;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    ll* ar=  new ll[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    ll maxvalue =INT_MIN;
    for(int i=0;i<n;i++){
        maxvalue = max(maxvalue , ar[i]);
    }
    int bitsrequired = ceil(log2(maxvalue));
    getBits(ar,n,bitsrequired);
    return 0;
}



