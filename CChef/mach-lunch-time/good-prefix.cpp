#include<bits/stdc++.h>
#include<unordered_map>
#define loop(i,n) for(int i=0;i<n;i++)
using namespace std;
int getmax(string s,int k,int x){
    unordered_map<char,int> um;
    int countlen=0;
    for(int i=0;i<s.length();i++){
        if(um[s[i]] < x){
            um[s[i]]++;
            countlen++;
        }else{
            if(k>0){
                k--;
            }else{
                break;
            }
        }
    }
    return countlen;
}
int main(void){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int k,x;
        cin>>k>>x;
        int ans = getmax(s,k,x);
        cout<<ans<<endl;
    }
  return 0;
}