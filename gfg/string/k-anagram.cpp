#include<bits/stdc++.h>
#include<map>
#include<vector>
#define loop(i,n) for(int i=0;i<n;i++)
using namespace std;
bool anagram(string s1,string s2,int k){
    int n=s1.length();
    int m=s2.length();
    if(n!=m){
        return false;
    }
    map<char,int> mp1;
    map<char,int> mp2;
    loop(i,n){
        mp1[s1[i]]++;
    }
    loop(i,m){
        mp2[s2[i]]++;
    }
    map<char,int>::iterator y = mp2.begin();
    map<char,int>::iterator x = mp1.begin();
    for(;x!=mp1.end();x++,++y){
       if(x->first == y->first){
           if((x->second)!=y->second){
               if(k>0){
                   k=k-abs(x->second - y->second);
               }else{
                   return false;
               }
           }
       }
    }
  
       if(k>0){
           return true;
       }
       return false;
}
int main(void){
    string s1,s2;
    cin>>s1>>s2;
    int k;
    cin>>k;
    cout<<anagram(s1,s2,k)<<endl;
  return 0;
}