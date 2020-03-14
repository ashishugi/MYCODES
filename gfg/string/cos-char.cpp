#include<bits/stdc++.h>
#define loop(i,n) for(int i=0;i<n;i++)
using namespace std;
int getconsanswer(string s){
    int len =1,final_len=0;
     char ch = s[0];
     int n=s.length();
    for(int i=1;i<n;i++){
        if(final_len < len){
            final_len = len;
        }
       if(ch==s[i]){
           len++;
       }else{
           ch=s[i];
           len=1;
       }
    }
    return final_len;
}
int main(void){
    string s;
    cin>>s;
    int ans = getconsanswer(s);
    cout<<ans<<endl;
  return 0;
}