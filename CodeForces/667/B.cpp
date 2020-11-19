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
int getCount(int* ar,int n){
    int res= 0;
    for(int i=1;i<n;){
        if(ar[i] == 0 && ar[i-1]== 1){
            int pre = i;
            while(i < n && ar[i]!=1){
                i++;
            }
            if(i != n){
                res += i - pre;
            }
            // cout<<res<< " "<<i<< " "<<pre<<endl;
        }else{
            i++;
        }
    }
    // cout<<endl;
    return res;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int* ar = new int[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        int count = getCount(ar,n);
        cout<<count<<endl;
    }
    return 0;
}