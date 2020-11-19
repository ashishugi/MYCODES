#include<bits/stdc++.h>
#include<vector>
#include<utility>
#include<set>
#include<stack>
#include<queue>
#include<unordered_map>
#include<unordered_set>
typedef long long ll;
#define mod 1000000007
#define pb push_back
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
int getPairs(int n ,string f,string m){
    queue<char> female;
    queue<char> male;
    for(int i=0;i<n;i++){
        female.push(f[i]);
    }
    for(int i=0;i<n;i++){
        male.push(m[i]);
    }
    int count = 0;
    while(!female.empty() && count<n && !male.empty()){
        if(female.front() == male.front()){
            female.pop();
            male.pop();
        }else{
            char tempval = male.front();
            male.pop();
            male.push(tempval);
            count++;
        }
    }
    return (female.size());
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    string f,m;
    cin>>f>>m;
    int ans = getPairs(n,f,m);
    cout<<ans<<endl;
    return 0;
}