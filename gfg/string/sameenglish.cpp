#include<bits/stdc++.h>
#define loop(i,n) for(int i=0;i<n;i++)
using namespace std;
int getnumber(string s){
    int n=s.length(),count=0;
    for(int i=0;i<n;i++){
        if((s[i]-'a')==i || (s[i]-'A')==i){
            count++;
        }
    }
    return count;
}
int main(void){
    string s;
    cin>>s;
    cout<<getnumber(s)<<endl;
  return 0;
}