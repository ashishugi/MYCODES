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
int convert(string s,int len){
    if(len == 0){
        return 0;
    }
    if(len == 1){
        return (s[0]-'0');
    }
    int x = convert(s,len-1);
    x = x*10+(s[len-1]-'0');
    return x;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    string s;
    cin>>s;
    int ans = convert(s,s.length());
    cout<<ans<<endl;
    return 0;
}