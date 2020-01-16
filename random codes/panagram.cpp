#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main(void){
    string S;
     cin>>S;
    int flag=0;
  for(int i=0;i<S.length();i++){
      S[i]=toupper(S[i]);
  }
    int ar[100];
    for(int i=0;i<100;i++){
        ar[i]=0;
    }
    for(int i=0;i<S.length();i++){
       int num = S[i];
        ar[num]++;
    }
    for(int i=65;i<=90;i++){
        if(ar[i]==0){
            cout<<"NO"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"YES"<<endl;
    }
}