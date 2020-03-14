#include<map>
#include<bits/stdc++.h>
#define loop(i,n) for(int i=0;i<n;i++)
using namespace std;
int main(void){
    string s;
    cin>>s;
    int n=s.length();
    int substring=0;
    if(n==0){
        cout<<"1"<<endl;
    }else if(n < 3){
        cout<<"0"<<endl;
    }
    else{
         loop(i,n){
            for(int j=i;j<n;j++){
              map<char,int> check;
             for(int k=i;k<=j;k++){
                    check[s[k]]++;
                }
              if(check['a']==check['b'] && check['b'] == check['c']){
                  cout<<s.substr(i,(j-i)+1)<<endl;
                   substring++;
                }
            }
        }
        cout<<substring<<endl;
    }

  
    return 0;
}