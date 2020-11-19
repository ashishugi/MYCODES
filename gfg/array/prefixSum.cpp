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
    int n;
    cin>>n;
    int* ar = new int[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int q;
    cin>>q;
    int* prefix = new int[n];
    prefix[0] = ar[0];
    for(int i=1;i<n;i++){
        prefix[i] = prefix[i-1]+ar[i];
    }
    while(q--){ //[ 1 ,2 , 3 , 4, 5 ] 
        int l,r;
        cin>>l;
        cin>>r;
        int ans =  0;
        if(l == 0){
            ans = prefix[r];
        }else{
            ans = prefix[r] - prefix[l-1];
        }
        cout<<ans<<endl;
    }
    return 0;
}