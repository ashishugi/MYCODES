#include<bits/stdc++.h>
using namespace std;
bool check(string s){
    for(int i=0;i<s.length();i++){
        if(s[i] == '-' || (s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122)){
            continue;
        }else if(s.length()>1 && i == s.length()-1){
            continue;
        }
        else{
            return false;
        }
    }
    return true;
}
int getAns(string s){
    int res=0;
    string word="";
    for(int i=0;i<s.length();i++){
        if(s[i] == ' '){
            if(check(word)){
                res++;
                cout<<word<<endl;
            }
            word="";
        }else{
            word+=s[i];
        }
    }
    return res;
}
int main(void){
    string s;
    getline(cin,s);
    cout<<s<<endl;
    int res = getAns(s);
    cout<<res<<endl;
}