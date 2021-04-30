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
bool check(string s,int k){
    int count =0;
    for(int i=0;i<s.length();i++){
        if(s[i] == '*'){
            count++;
        }else{
            count =0;
        }
        if(count >= k){
            return true;
        }
    }
    if(count >= k){
        return true;
    }
    return false;
}
int main(void){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k;
        cin>>k;
        string s;
        cin>>s;
        if(check(s,k)){
            cout<<"Yes"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}