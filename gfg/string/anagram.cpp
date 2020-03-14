#include<bits/stdc++.h>
#define loop(i,n) for(int i=0;i<n;i++)
using namespace std;
bool anagram(string s1,string s2){
    int n=s1.length();
    int m=s2.length();
    if(n!=m){
        return false;
    }
    map<char,int> m1;
    map<char,int> m2;
    loop(i,n){
        m1[s1[i]]++;
        m2[s2[i]]++;
    }
    map<char,int>::iterator i1 = m1.begin();
    map<char,int>::iterator i2 = m2.begin();
    for(;i1!=m1.end();i1++,i2++){
        if(i1->first == i2->first){
            if(i1->second != i2->second){
                return false;
            }
        }else{
            return false;
        }
    }
    return true;


}
int main(void){
   int t;
   cin>>t;
   while(t--){
        string s1,s2;
        cin>>s1>>s2;
        if(anagram(s1,s2)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
   }
  return 0;
}