#include<bits/stdc++.h>
#include<string.h>
using namespace std;
bool palindrome(string str){
       string temp =str;
       reverse(str.begin(),str.end());
      
      if(str == temp){
       
         return true;
      }
      else{
        
          return  false;
      }
}
int main(void){
    string str,res;
    cin >> str;
    int max_len = -1;   
    for(int i=0;i<str.length();i++){
        for(int j=i;j<str.length();j++){
            if(palindrome(str.substr(i,(j-i+1)))){
                int len = abs(i-j)+1;
                if(len > max_len){
                     max_len = len;
                    res = str.substr(i,len);
                   
                   
                }
            } 
           
        }
    }
    cout<<res<<endl;
}