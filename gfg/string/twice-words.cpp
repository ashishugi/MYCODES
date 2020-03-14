#include<bits/stdc++.h>
#define loop(i,n) for(int i=0;i<n;i++)
using namespace std;
int main(void){
    int n;
    cin>>n;
    string* s = new string[n];
    map<string,int> mp;
    loop(i,n){
        cin>>s[i];
        mp[s[i]]++;
    }
    for(auto x : mp){
        cout<< x.first << " : " <<x.second<<endl;
    }
  return 0;
}