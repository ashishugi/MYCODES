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
int getAns(int n,int capacity){
    int price =0;
    int curr =0;
    int index = 0;
    if(capacity >= n){
        return (n-1);
    }
    int limit = n - capacity;
    int res =0;
    res+=capacity;
    for(int i=2;i<=limit;i++){
        res+=i;
    }
    return res;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0); 
    int n;
    cin>>n;
    int capacity;
    cin>>capacity;
    int res = getAns(n,capacity);
    cout<<res<<endl;
    return 0;
}