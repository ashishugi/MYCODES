#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void getstring(string s,string& output){
    //cout<<s<<  "   " <<output<<endl;
    if(s.length()==0){
        return; 
    }
    if(s.length() ==1){
        output +=s[0];
        return;
    }
    int len = s.length();
    int mid = ceil((len)/2.0);
    output=output+s[mid-1];
    getstring(s.substr(0,mid-1) , output);
    getstring(s.substr(mid,len-mid),output);
}
int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    string output="";
    getstring(s,output);
    cout<<output<<endl;
    return 0;
}
