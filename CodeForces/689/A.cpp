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
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string output="";
        while(k--){
            output+='a';
            n--;
        }
        for(int i=0;i<n;i++){
            if(i%3 == 0){
                output+='b';
            }else if(i%3 == 1){
                output+='c';
            }else{
                output+='a';
            }
        }
        cout<<output<<endl;
    }
    return 0;
}