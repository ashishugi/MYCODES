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
void getsorted(ll* ar1,int n,ll* ar2,int m){

    int i=0,j=0;
    while(i<n && j<m){
        if(ar1[i] > ar2[j]){
            swap(ar1[i],ar2[j]);
            i++;
            int k =j+1;
            int q= j;
            while(k<m && ar2[k]<ar2[q]){
                swap(ar2[k],ar2[q]);
                q++;
                k++;
            }
        }else{
            i++;
        }
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n , m;
        cin>>n>>m;
        ll* ar1 = new ll[n];
        ll* ar2 = new ll[m];
        for(int i=0;i<n;i++){
            cin>>ar1[i];
        }
        for(int i=0;i<m;i++){
            cin>>ar2[i];
        }
        getsorted(ar1,n,ar2,m);
        loop(i,0,n){
            cout<<ar1[i]<< " ";
        }
        loop(i,0,m){
            cout<<ar2[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}