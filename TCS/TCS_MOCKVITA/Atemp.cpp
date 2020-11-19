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
    while(!female.empty() && !male.empty()){
        if(female.front() == male.front()){
            female.pop();
            male.pop();
        }else{
            int count =0;
            queue<char> temp = male;
            while(female.front() != temp.front() && count<n){
                char val = temp.front();
                temp.pop();
                temp.push(val);
                count++;
            }
            if(count == n){
                return (female.size());
            }else{
                male = temp;
            }
        }
    }
    // cout<<female.size()<<endl;
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