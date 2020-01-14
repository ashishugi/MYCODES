#include<bits/stdc++.h>
using namespace std;
bool ismatch(string s,string p){
    bool check = true;
    for(int i=0;i<(s.length() - p.length());i++){
        check = true;
        for(int j=0;j<(p.length());j++){
            if(s[i+j]!=p[j]){
                check= false;
                break;
            }
        }
        if(check){
        return true;
       }
    }
    return false;
}
int main(void){
    string s,p;
    cin>>s;
    cin>>p;
    cout<<ismatch(s,p)<<endl;
}