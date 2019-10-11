#include<iostream>
#include<bits/stdc++.h>
#include<map>
using namespace std;
bool possible(map<char,int> mp,int len,string str){
   map<char,int>::iterator itr = mp.begin();
    int count=0;
    for(;itr!=mp.end();itr++){
        if(itr->second%2!=0){
             count++;  
        }
        if(count>1){
            return false;
        }
    }
      char output[30];
      itr = mp.begin();
    for(;itr!=mp.end();itr++){
        if(itr->second%2!=0){
            output[len/2]=itr->first;
            itr->second--;
        }
    }
   itr = mp.begin();
    int i=0,j=len-1;
    /* for(;itr!=mp.end();itr++){
        while (itr->second!=0){
            output[i]=itr->first;
            itr->second--;
            i++;
            output[j]=itr->first;
            itr->second--;
            j--;
      }
    }*/
    for(int i=0;i<len;i++){
        mp[str[i]]
    }
    for(int i=0;i<len;i++){
        cout<<output[i]<<" ";
    }
cout<<endl;
    return true;
}
int main(void){
    string str;
    cout<<"enter the string "<<endl;
    cin>>str;
    int len = str.length();
    map<char , int> mp;
    for(int i=0;i<len;i++){
        mp[str[i]]++;
    }
    //cout<<len<<endl;
    if(possible(mp,len,str)){
        cout<<"can be made"<<endl;
    }
    else{
        cout<<"cannot be made"<<endl;
    }

}