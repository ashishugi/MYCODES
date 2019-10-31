#include<bits/stdc++.h>
#include<set>
using namespace std;
int main(void){
    
     string str;
    
    getline(cin,str);
    unordered_map<string,int> name;
  
    list<string> lt;
    
   // for(int i=0;i<str.length();i++){
      
        
        string ch = ""; 
        for (auto x :str) 
        { 
            if (x == ' ') 
           { 
          name[ch]++;
          lt.push_back(ch);
          ch = ""; 
          
            }
         else {
             ch = ch + x; 
          } 
        }
    name[ch]++;
        
   // }
    int flag=0;
    auto y = lt.begin();
   for(auto x :  name){
       cout
   }
    if(flag==0){
        cout<<"-1"<<endl;
    }
}