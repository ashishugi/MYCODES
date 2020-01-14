#include<bits/stdc++.h>
using namespace std;
int palin(string s){
    int max_len =0 ;
    for(int i=0;i<s.length();i++){
       int l = i;
       int r=i;
       int curr =0;
       while(l>=0 && r<s.length() && s[l]==s[r]){
           curr = (r-l)+1;
           if(max_len < curr){
               max_len = curr;
           }
           l--;
           r++;
       }
       l=i;
       r=i+1;
       curr =0 ;
       while(l>=0 && r<s.length() && s[l]==s[r]){
           curr = (r-l)+1;
           if(max_len < curr){
               max_len = curr;
           }
           l--;
           r++;
       }
    }
    return max_len;
}
int main(void){
    string s;
    cin>>s;
    cout<<palin(s)<<endl;
}