#include<bits/stdc++.h>
#define loop(i,n) for(int i=0;i<n;i++)
using namespace std;
string lcp(string* input,int n){
    int len = n;
    string res="";
    int minlen =INT_MAX;
    for(int i=0;i<len;i++){
        if(minlen > input[i].length()){
            minlen = input[i].length();
        }
    }
    for(int i=0;i<minlen;i++){
        int flag=1;
        char ch= input[0][i];
        for(int j=0;j<len;j++){
            if(ch == input[j][i]){
                continue;
            }else{
                flag=0;
                return res;
            }
        }
        if(flag==1){
            res = res+ch;
        }
    }
    return res;
}
int main(void){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string* input = new string[n];
        for(int i=0;i<n;i++){
            cin>>input[i];
        }
       string s=lcp(input,n);
       if(s.length()==0){
           cout<<"-1"<<endl;
       }else{
           cout<<s<<endl;
       }
    }
    
  return 0;
}