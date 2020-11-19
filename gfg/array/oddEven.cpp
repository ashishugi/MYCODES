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
int getMax(vector<int>& ar){  // O(n2)
    int len = ar.size();
    int length =0;
    int res =0; //[2,1,6,7,10,13,15]
    for(int i=0;i<len;i++){
        int temp =1;
        for(int j=i+1;j<len;j++){
            if((ar[j]%2==0 && ar[j-1]%2!=0) || (ar[j]%2!=0 && ar[j-1]%2==0)){
                // cout<<ar[j-1]<< " "<<ar[j]<<" "<< temp<<endl;
                temp++;
            }else{
                res = max(res,temp);
                break;
            }
        }
    }
    return res;
}
int getMax1(vector<int>& ar){ // O(n) // kadane's method .
    int len  = ar.size();
    int res =0;
    int temp =1;
    for(int i=1;i<len;i++){
        if((ar[i]%2==0 && ar[i-1]%2!=0 )|| (ar[i]%2!=0 && ar[i-1]%2==0)){
            temp++;
        }else{
            res = max(res,temp);
            temp=1;
        }
        res = max(res,temp);
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
    int ans = getMax1(ar);
    cout<<ans<<endl;
    return 0;
}