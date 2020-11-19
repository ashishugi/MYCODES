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
int flip(int* ar,int n){
    //[1,1,0,0,0,1,0,1,1]
    int flipOne = 0;
    int flipZero = 0;
    int i=0;
    for(;i<n;){ // one's
        if(ar[i] == 1){
            while(i<n && ar[i]==1){
                i++;
            }
            flipOne++;
        }else{
            while(i<n && ar[i] == 0){
                i++;
            }
            flipZero++;
        }
    }
    // cout<<flipOne<< " "<<flipZero<<endl;
    return min(flipOne,flipZero);
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int* ar = new int[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int ans = flip(ar,n);
    cout<<ans<<endl;
    return 0;
}