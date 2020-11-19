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
void fixMatrix(ll** ar,int row,int col){
    bool flag = false; // even , odd
    if(ar[0][0]%2==0){
        flag = true;
    }else{
        flag = false;
    }
    for(int i=0;i<row;i++){
        if(flag){
            for(int j=0;j<col;j++){
                if(j%2==0 && ar[i][j]%2!=0){
                    ar[i][j]+=1;
                }else if(j%2!=0 && ar[i][j]%2 == 0){
                    ar[i][j] +=1;
                }
            }
            flag = false;
        }else{ // odd , even
            for(int j=0;j<col;j++){
                if(j%2==0 && ar[i][j]%2==0){
                    ar[i][j]+=1;
                }else if(j%2!=0 && ar[i][j]%2 != 0){
                    ar[i][j] +=1;
                }
            }
            flag = true;
        }
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        ll** ar = new ll*[n];
        for(int i=0;i<n;i++){
            ar[i] = new ll[m];
            for(int j=0;j<m;j++){
                cin>>ar[i][j];
            }
        }
        fixMatrix(ar,n,m);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<ar[i][j]<< " ";
            }
            cout<<endl;
        }
    }
    return 0;
}