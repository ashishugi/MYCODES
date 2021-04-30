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
    int a,b,c;
    cin>>a>>b>>c;
    if((a==b) || (a== c) || (b == c)){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}