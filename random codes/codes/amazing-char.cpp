#include<bits/stdc++.h>
using namespace std;
int main(void){
    string s1,s2,s3;
    cin>>s1;
    cin>>s2;
    cin>>s3;
    int flag=0;
    map<char , int> num;
    map<char ,int> num2;
    for(int i=0;i<s1.length();i++){
        num[s1[i]]++;
    }
     for(int i=0;i<s2.length();i++){
       num[s2[i]]++;
    }
     for(int i=0;i<s3.length();i++){
       num2[s3[i]]++;
        
    }
    // cout<<"afetr loop"<<endl;
    // for(auto x:num){
    //     cout<<x.first<<"=>"<<x.second<<endl;
    // }
    if(num.size()!=num2.size()){
       // cout<<"NO"<<endl;
        flag=1;
    }
    else{
        for(int i=0;i<s3.length();i++){
            if(num[s3[i]]!=num2[s3[i]]){
                cout<<"NO"<<endl;
                flag=1;
                break;
            }
        }
    }
    
    
    if(flag==0){
        cout<<"YES"<<endl;
    } 
   // cout<<"at last"<<endl;
    // for(auto x:num){
    //     cout<<x.first<<"=>"<<x.second<<endl;
    // }
    // for(auto x:num2){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }
    return 0;
}