#include<bits/stdc++.h>
using namespace std;
#define MAX 1000001
typedef long long ll;
int ar[MAX];
int res[11][MAX];
void sieve(){
    int limit = sqrt(MAX);
    ar[0]=0;
    ar[1]=0;
    for(int i=2;i<MAX;i++){
        if(ar[i]==0){
            ar[i]=1;
            for(int j=i*2;j<MAX;j+=i){
                ar[j]++;
            }
        }
    }
    for(int i=0;i<=10;i++){
        for(int j=1;j<MAX;j++){
            if(ar[j]==i){
                res[i][j] =res[i][j-1]+1;
            }else{
                res[i][j] = res[i][j-1];
            }
        }
    }
    // for(int i=0;i<=10;i++){
    //     for(int j=0;j<=MAX;j++){
    //         cout<<res[i][j]<< " ";
    //     }
    //     cout<<endl;
    // }
}
int main(void){
    sieve();
    int t;
    cin>>t;
    while(t--){
        int a,b,n;
        cin>>a>>b>>n;
            cout<<(res[n][b] - res[n][a-1])<<endl;
    }
    return 0;
}