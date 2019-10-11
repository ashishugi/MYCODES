#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(void){
    string str;
    cin>>str;
    int len =str.length();
    int i=0;
    int j=len-1;
    while(i<j){
        if(((str[i]>=96 && str[i]<=122) || (str[i]>=65 && str[i]<=90)) && ((str[j]>=96 && str[j]<=122) || (str[j]>=65 && str[j]<=90))){
            swap(str[i],str[j]);
            j--;
            i++;
        }
        else if(((str[i]>=96 && str[i]<=122)  || (str[i]>=65 && str[i]<=90))){
            j--;
        }
        else if((str[j]>=96 && str[j]<=122) || (str[j]>=65 && str[j]<=90)){
            i++;
        }
        else{
            i++;
            j--;
        }
    }
    cout<<str<<endl;
}
#include <bits/stdc++.h>
#include<map>
using namespace std;
int main(void){
    int n;
    cin>>n;
  mp<int  , vector<int> > mp;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        mp[m].push_back(i);
    }
    int k;
    cin>>k;
    auto itr = mp.begin();
    for(;itr!=mp.end();i++){
        cout<<*itr->first;
        
    }
    
}