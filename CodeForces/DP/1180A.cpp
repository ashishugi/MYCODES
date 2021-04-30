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
    vector<int> ar(n+1,0);
    ar[0]=0;
    ar[1]=1;
    ar[2] = 5;
    for(int i=3;i<=n;i++){
        ar[i] = (i-1)*4+ar[i-1];
    }
    cout<<ar[n]<<endl;
    return 0;
}