#include<bits/stdc++.h>
#define loop(i,n) for(int i=0;i<n;i++)
using namespace std;
string deepB(string s){
    int open = 0;
    string res="";
    for(int i=0;i<s.length();i++){
        if(open == s[i]-'0'){
            res+=s[i];
        }else{
            if(open > s[i]-'0'){
                while(open > s[i]-'0'){
                    res+=')';
                    open--;
                }
                res+=s[i];
            }else{
                while(open < s[i]-'0'){
                    res+='(';
                    open++;
                }
                res+=s[i];
            }
        }
    }
    // putting the lat closing brackets
    int val =res[res.length()-1]-'0';
    while(val!=0){
        res+=')';
        val--;
    }

    return res;
}
int main(void){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        string s;
        cin>>s;
        string res = deepB(s);
        cout<<res<<endl;
    }
  return 0;
}