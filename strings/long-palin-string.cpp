#include<bits/stdc++.h>
using namespace std;
bool ispalindrome(string s){
    for(int i=0,j=s.length()-1;(i< s.length()/2);i++,j--){
        if(s[i]!=s[j]){
            return false;
        }
    }
    return true;
}
int main(void){
    string s;
    cin>>s;
    string final_string;
    int max_length =0;
    for(int i=0;i<s.length();i++){
        for(int j=i;j<s.length();j++){
            string str = s.substr(i , abs(i-j)+1);
            if(ispalindrome(str)){
               // cout<<str<<" "<<ispalindrome(str)<<endl;
                if(str.length() > max_length){
                    max_length = str.length();
                    final_string = str;
                }
            }
        }
    }
    cout<<final_string<<endl;
}